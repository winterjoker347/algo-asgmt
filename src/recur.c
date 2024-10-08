#include "../include/recur.h"

int countValuesRecur(int *a, unsigned int n, int value) {
    if(n<=0) return 0;
    return countValuesRecur(a, n-1, value)+(a[n-1]==value);
}

int hasSameValuesRecur(int *a, unsigned int n) {
    if(n<2) return 0;
    if(n==2) return (a[1]==a[0]);
    if(hasSameValuesRecur(a, n-1))
        return 1;
    for(unsigned int i=0; i<=n-2; i++)
        if(a[i]==a[n-1])
            return 1;
    return 0;
}

INT findMinimumDifferenceRecur(int *a, unsigned int n) {
    if(n<=2)
        return llabs((INT)a[1]-a[0]);
    INT mn = findMinimumDifferenceRecur(a, n-1);
    for(unsigned int i=0; i<=n-2; i++)
        if(mn>llabs((INT)a[n-1]-a[i]))
            mn = llabs((INT)a[n-1]-a[i]);
    return mn;
}

int countDigitsRecur(int value, int base, int digit) {
    if(value<=0) return (value==digit);
    return countDigitsRecur(value/base, base, digit)+(value%base==digit);
}

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

int countSymmetricPairsRecur(int *a, unsigned int low, unsigned int high) {
    if(low>high) return 0;
    if(low==high) return 1;
    return countSymmetricPairsRecur(a, low+1, high-1)+(a[low]==a[high]);
}

int isArithmeticSequenceRecur(int *a, unsigned int n, int diff) {
    if(n<=1) return 1;
    if(a[n-1]-a[n-2]!=diff) return 0;
    return isArithmeticSequenceRecur(a, n-1, diff);
}

INT checkTotalRecur(int *a, int n, INT sum, INT total) {
    if(sum==total) return 1;
    if(n<=0) return 0;
    return checkTotalRecur(a, n-1, sum+a[n-1], total);
}

int countDistinctValuesRecur(int *a, int n) {
    if(n<=0) return 0;
    int count = countDistinctValuesRecur(a, n-1);
    int j = 0;
    while(j<n-1) {
        if(a[j]==a[n-1])
            break;
        j++;
    }
    if(j==n-1)
        count++;
    return count;
}
