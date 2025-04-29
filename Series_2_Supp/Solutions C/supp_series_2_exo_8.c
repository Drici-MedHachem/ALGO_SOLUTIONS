#include<stdio.h>
int main() {
    int n , i;
    float sum = 0.0;
    do {
        printf("Enter tehe number of terms to calculate in the sum : ");
        scanf("%d",&n);
    }while (n < 1);
    for( i = 0 ; i <= n ; i++) {
        sum += 1/i;
    }
    printf("The harmonic sum up to %d  = %f",n,sum);
    return 0;
}