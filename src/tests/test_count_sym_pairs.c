#include <stdio.h>
#include "../../include/iter.h"
#include "../../include/recur.h"

int countSymmetricPairs(int *a, unsigned int n) {
    return countSymmetricPairsRecur(a, 0, n-1);
}

void printInput(int *a, unsigned int n) {
    printf("  Input:\t");
    for(unsigned int i=0; i<n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void testCountSymmetricPairs(int testcase, int *a, unsigned int n, int expected) {
    printf("Test Case #%d\n", testcase);
    printInput(a, n);
    printf("  Expected:\t%d\n\n", expected);
    
    printf("  Iterative Version: ");
    printf("%d\n", countSymmetricPairsIter(a, n));
    
    printf("  Recursive Version: ");
    printf("%d\n", countSymmetricPairs(a, n));
    printf("\n");
}

int main(void)
{
    int test_arr1[] = {5, 2, 2, 3, 1, 2, 2, 3};
    testCountSymmetricPairs(1, test_arr1, 8, 2);
    testCountSymmetricPairs(2, test_arr1, 7, 2);
    testCountSymmetricPairs(3, test_arr1, 6, 0);
    testCountSymmetricPairs(4, test_arr1, 1, 1);

    int test_arr2[] = {1, 2, 1};
    testCountSymmetricPairs(5, test_arr2, 3, 2); // palindrome

    return 0;
}
