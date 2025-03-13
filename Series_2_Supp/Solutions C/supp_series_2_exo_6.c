#include<stdio.h>

int main() {
    int n,i;
    do{
        printf("Enter a strictly positive integer n : ");
        scanf("%d",&n);
        if(n < 0) printf("Error! n must be strictly postiive");

    }while(n < 0);
    for( i = 1 ; i <= 9 ; i++) {
        printf("%d x %d  = %d \n", n , i , n*i);
    }
    return 0;
}