#include <stdio.h>
#include "../../include/iter.h"
#include "../../include/recur.h"

void printInput(int *a, unsigned int n) {
    printf("  Input:\t");
    for(unsigned int i=0; i<n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void testCountDistinctValues(int testcase, int *a, unsigned int n, int expected) {
    printf("Test Case #%d\n", testcase);
    printInput(a, n);
    printf("  Expected:\t%d\n\n", expected);
    
    printf("  Iterative Version: ");
    printf("%d\n", countDistinctValuesIter(a, n));
    
    printf("  Recursive Version: ");
    printf("%d\n", countDistinctValuesRecur(a, n));
    printf("\n");
}

int main(void)
{
    int test_arr1[] = {8, 3, 2, 3, 1, 2, 2};
    testCountDistinctValues(1, test_arr1, 7, 3);
    testCountDistinctValues(2, test_arr1, 4, 3);
    testCountDistinctValues(3, test_arr1, 0, 0); // n==0

    return 0;
}
