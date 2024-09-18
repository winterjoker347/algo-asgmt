#include <stdio.h>
#include "../../include/iter.h"
#include "../../include/recur.h"

void testCountDigits(int testcase, int value, int base, int digit, int expected) {
    printf("Test Case #%d\n", testcase);
    printf("  Input:\t%d %d %d\n", value, base, digit);
    printf("  Expected:\t%d\n\n", expected);
    
    printf("  Iterative Version: ");
    printf("%d\n", countDigitsIter(value, base, digit));
    
    printf("  Recursive Version: ");
    printf("%d\n", countDigitsRecur(value, base, digit));
    printf("\n");
}

int main(void)
{
    testCountDigits(1, 5313133, 10, 3, 4);
    testCountDigits(2, 5313133, 10, 2, 0);
    testCountDigits(3, 23, 3, 2, 2);
    testCountDigits(4, 0, 10, 0, 1); // value = 0
    testCountDigits(5, 123, 10, 10, 0); // base<digit

    return 0;
}