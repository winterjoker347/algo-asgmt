#include <stdio.h>
#include "../../include/iter.h"
#include "../../include/recur.h"

int isArithmeticSequence(int *a, unsigned int n) {
    if(n<=2)
        return 1;
    return isArithmeticSequenceRecur(a, n-1, a[n-1]-a[n-2]);
}

void printInput(int *a, unsigned int n) {
    printf("  Input:\t");
    for(unsigned int i=0; i<n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void testIsArithmeticSequence(int testcase, int *a, unsigned int n, int expected) {
    printf("Test Case #%d\n", testcase);
    printInput(a, n);
    printf("  Expected:\t%d\n\n", expected);
    
    printf("  Iterative Version: ");
    printf("%d\n", isArithmeticSequenceIter(a, n));
    
    printf("  Recursive Version: ");
    printf("%d\n", isArithmeticSequence(a, n));
    printf("\n");
}

int main(void)
{
    int test_arr1[] = {2, 5, 8, 11, 14, 16, 19, 22, 25, 28};
    testIsArithmeticSequence(1, test_arr1, 4, 1);
    testIsArithmeticSequence(2, test_arr1, 8, 0);

    int test_arr2[] = {1};
    testIsArithmeticSequence(3, test_arr2, 1, 1); // n<=2

    return 0;
}
