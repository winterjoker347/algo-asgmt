#include <stdio.h>
#include <limits.h>
#include "../../include/iter.h"
#include "../../include/recur.h"

INT findMinimumDifference(int *a, int n) {
    if(n<2)
        return -1;
    return findMinimumDifferenceRecur(a, n);
}

void printInput(int *a, unsigned int n) {
    printf("  Input:\t");
    for(unsigned int i=0; i<n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void testFindMinimumDifference(int testcase, int *a, unsigned int n, INT expected) {
    printf("Test Case #%d\n", testcase);
    printInput(a, n);
    printf("  Expected:\t%lld\n\n", expected);
    
    printf("  Iterative Version: ");
    printf("%lld\n", findMinimumDifferenceIter(a, n));
    
    printf("  Recursive Version: ");
    printf("%lld\n", findMinimumDifference(a, n));
    printf("\n");
}

int main(void)
{
    int test_arr1[] = {56, 12, 27, 49, 31};
    testFindMinimumDifference(1, test_arr1, 5, 4);
    testFindMinimumDifference(2, test_arr1, 1, -1); // n<2
    testFindMinimumDifference(3, test_arr1, 3, 15);

    int test_arr2[] = {INT_MAX, INT_MIN, INT_MAX};
    testFindMinimumDifference(4, test_arr2, 2, (INT)INT_MAX-INT_MIN); // overflow
    testFindMinimumDifference(5, test_arr2, 3, 0); // has same values

    return 0;
}
