#include<stdio.h>

int main() {
    int n,i,sum = 0;
    do {
        printf("Enter the term to calculate the sum of the first n odd squares : ");
        scanf("%d",&n);
    }while(n < 1);
    for(i = 1 ; i <= n ; i++) {
        sum += (2*i - 1) * (2*i -1);
    }
    printf("The sum of the first %d odd squares = %d",n,sum);
    return 0;
}