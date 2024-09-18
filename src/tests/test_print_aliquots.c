#include <stdio.h>
#include "../../include/iter.h"
#include "../../include/recur.h"

void printAliquots(int value) {
    if(value!=0) {
        if(value<0)
            value = -value;
        printAliquotsRecur(value, 1, value);
    } else
        printf("invalid argument");
    printf("\n");
}

void testPrintAliquots(int testcase, int value, char *expected) {
    printf("Test Case #%d\n", testcase);
    printf("  Input:\t%d\n", value);
    printf("  Expected:\t%s\n\n", expected);
    
    printf("  Iterative Version: ");
    printAliquotsIter(value);
    
    printf("  Recursive Version: ");
    printAliquots(value);
    printf("\n");
}

int main(void)
{
    testPrintAliquots(1, 24, "1 2 3 4 6 8 12 24");
    testPrintAliquots(2, -15, "1 3 5 15");
    testPrintAliquots(3, 25, "1 5 25");
    testPrintAliquots(4, 1, "1");
    testPrintAliquots(5, 0, "invalid argument");

    return 0;
}