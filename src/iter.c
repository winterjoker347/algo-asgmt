#include "../include/iter.h"

int countValuesIter(int *a, unsigned int n, int value) {
    int res = 0;
    for(unsigned int i=0; i<n; i++)
        if(a[i]==value)
            res += 1;
    return res;
}

int hasSameValuesIter(int *a, unsigned int n) {
    for(unsigned int i=1; i<n; i++)
        for(unsigned int j=0; j<i; j++)
            if(a[i]==a[j])
                return 1;
    return 0;
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

int countDigitsIter(int value, int base, int digit) {
    int res = 0;
    while(value>0) {
        if(value%base==digit)
            res += 1;
        value /= base;
    }
    if(res==0 && digit==0)
        res += 1;
    return res;
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

int countSymmetricPairsIter(int *a, unsigned int n) {
    int res = 0;
    if(n%2==1)
        res += 1;
    for(unsigned int i=0; i<n/2; i++)
        if(a[i]==a[n-i-1])
            res += 1;
    return res;
}