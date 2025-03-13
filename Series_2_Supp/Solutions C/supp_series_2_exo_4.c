#include<stdio.h>

int main() {
    int n,i;
    do {
        printf("Enter a strictly positive integer n :");
        scanf("%d",&n);
        if(n < 0) printf("Error! n must be strictly positive");
    }while(n < 0);
    if (n % 2 == 1) i = n; else  i = n+1;
    printf("First %d \n",n+99);
    for(i ; i <= n+99 ; i += 2) printf("%d \n",i);
    return 0;

}