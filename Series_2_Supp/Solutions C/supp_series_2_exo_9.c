#include<stdio.h>
int main() {
    int n , i;
    do {
        printf("Enter a natural number n : ");
        scanf("%d",&n);
    }while (n < 1);
    printf("The divisiors of %d are : 1 ",n);
    for(i = 2 ; i < n/2 ; i++ ) {
        if(n % i == 0) printf("%d ",i); 
    }
    printf("%d",n);
}