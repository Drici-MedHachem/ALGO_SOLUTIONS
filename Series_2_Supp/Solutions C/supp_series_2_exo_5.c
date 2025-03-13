#include<stdio.h>

int main() {
    int n,i = 2;
    do{
        printf("Enter a strictly positive integer n : ");
        scanf("%d",&n);
        if(n < 0) printf("Error! n must be strictly postiive");

    }while(n < 0);
    
    while(i <= n) {
        printf("%d \n",i);
        i += 2;
    }
    return 0;
}