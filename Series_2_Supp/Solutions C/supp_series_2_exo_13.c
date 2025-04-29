#include<stdio.h>

int main() {
    int n,i, sum = 0;
    do {
        printf("Enter a natural number n : ");
        scanf("%d",&n);
    }while (n < 0);
    i = n;
    while(0 < i) {
        sum += i % 10;
        i /= 10;
    }
    printf("The sum of digits of %d = %d",n,sum);
    return 0;
}