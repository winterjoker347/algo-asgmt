#include <stdio.h>
#include <limits.h>
#include "../../include/iter.h"
#include "../../include/recur.h"

int checkTotal(int *a, int n, INT total) {
    if(n<=0)
        return total==0;
    return checkTotalRecur(a, n, 0, total);
}

void printInput(int *a, int n, INT total) {
    printf("  Input:\ta[] = ");
    for(int i=0; i<n-1; i++)
        printf("%d ", a[i]);
    if(n>0)
        printf("%d", a[n-1]);
    printf(", total = %lld\n", total);
}

void testCheckTotal(int testcase, int *a, int n, INT total, int expected) {
    printf("Test Case #%d\n", testcase);
    printInput(a, n, total);
    printf("  Expected:\t%d\n\n", expected);
    
    printf("  Iterative Version: ");
    printf("%d\n", checkTotalIter(a, n, total));
    
    printf("  Recursive Version: ");
    printf("%d\n", checkTotal(a, n, total));
    printf("\n");
}

int main(void)
{
    int test_arr1[] = {2, 5, 3, 8, 1, 6, 7, 2, 4};
    testCheckTotal(1, test_arr1, 0, 0, 1);
    testCheckTotal(2, test_arr1, 5, 19, 1);
    testCheckTotal(3, test_arr1, 3, 11, 0);

    int test_arr2[] = {INT_MAX, INT_MAX, INT_MAX};
    testCheckTotal(4, test_arr2, 3, 3L*INT_MAX, 1); // overflow

    return 0;
}
