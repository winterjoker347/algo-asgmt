#include "../include/iter.h"

void printAliquotsIter(int value) {
    if(value!=0) {
        if(value<0)
            value = -value;
        int low = 1, high = value, a[30] = {}, n = 0;
        while(low<=high) {
            if(value%low==0) {
                printf("%d ", low);
                if(value/low>low)
                    a[n++] = value/low;
                low += 1;
                high = value/low;
            } else {
                low += 1;
                high = value/low;
            }
        }
        for(int i=0; i<n; i++)
            printf("%d ", a[n-i-1]);
    } else
        printf("invalid argument");
    printf("\n");
}
