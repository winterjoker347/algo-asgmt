#include <stdio.h>
#include "../../include/iter.h"
#include "../../include/recur.h"

void printInput(int *a, unsigned int n, int value) {
    printf("  Input:\ta[] = ");
    for(unsigned int i=0; i<n-1; i++)
        printf("%d ", a[i]);
    printf("%d, value = %d\n", a[n-1], value);
}

void testCountValues(int testcase, int *a, unsigned int n, int value, int expected) {
    printf("Test Case #%d\n", testcase);
    printInput(a, n, value);
    printf("  Expected:\t%d\n\n", expected);
    
    printf("  Iterative Version: ");
    printf("%d\n", countValuesIter(a, n, value));
    
    printf("  Recursive Version: ");
    printf("%d\n", countValuesRecur(a, n, value));
    printf("\n");
}

int main(void)
{
    int test_arr1[] = {5, 1, 1, 5, 2, 4, 1, 5, 1};
    testCountValues(1, test_arr1, 9, 1, 4);
    testCountValues(2, test_arr1, 6, 5, 2);

    int test_arr2[] = {5, -1, -1, 5, 2, 4, -1, 5, -1}; // include a_i<0
    testCountValues(3, test_arr2, 9, -1, 4);

    return 0;
}