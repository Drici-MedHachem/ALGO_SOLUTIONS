#include<stdio.h>

int main() {
    int n,fact = 1,i;
    do {
        printf("Enter a positive integer : ");
        scanf("%d" , &n);
        if(n < 0) {
            printf("Error! the integer must be positive");
        }
    }while(n < 0);
    if(n == 0 || n == 1) {
        printf("%d ! = 1",n);
    }
    else {
        for(i = 2; i <= n ; i++) {
        fact *= i;
    }
    printf("%d! = %d ",n , fact);
    }
    return 0;
}