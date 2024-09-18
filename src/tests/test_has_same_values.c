#include <stdio.h>
#include "../../include/iter.h"
#include "../../include/recur.h"

void printInput(int *a, unsigned int n) {
    printf("  Input:\t");
    for(unsigned int i=0; i<n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void testHasSameValues(int testcase, int *a, unsigned int n, int expected) {
    printf("Test Case #%d\n", testcase);
    printInput(a, n);
    printf("  Expected:\t%d\n\n", expected);
    
    printf("  Iterative Version: ");
    printf("%d\n", hasSameValuesIter(a, n));
    
    printf("  Recursive Version: ");
    printf("%d\n", hasSameValuesRecur(a, n));
    printf("\n");
}

int main(void)
{
    int test_arr1[] = {3, 7, 1, 5, 2, 4, 1, 5, 1};
    testHasSameValues(1, test_arr1, 9, 1);
    testHasSameValues(2, test_arr1, 7, 1);
    testHasSameValues(3, test_arr1, 6, 0);
    testHasSameValues(4, test_arr1, 1, 0); // n<=1


    return 0;
}