#include "../include/iter.h"

int countValuesIter(int *a, unsigned int n, int value) {
    int res = 0;
    for(unsigned int i=0; i<n; i++)
        if(a[i]==value)
            res += 1;
    return res;
}

INT findMinimumDifferenceIter(int *a, unsigned int n) {
    if(n<2)
        return -1;
    INT mn = llabs((INT)a[1]-a[0]);
    for(unsigned int i=2; i<n; i++)
        for(unsigned int j=0; j<i; j++)
            if(mn>llabs((INT)a[j]-a[i]))
                mn = llabs((INT)a[j]-a[i]);
    return mn;
}

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
