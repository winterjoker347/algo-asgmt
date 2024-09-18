#include "../include/recur.h"

void printAliquotsRecur(int value, int low, int high) {
    if(low>high)
        return;
    if(value%low==0) {
        printf("%d ", low);
        printAliquotsRecur(value, low+1, value/(low+1));
        if(value/low>low)
            printf("%d ", value/low);
    } else
        printAliquotsRecur(value, low+1, value/(low+1));
}
