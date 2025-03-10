#include<stdio.h>

int main() {
    //first version
    int a,b,i,prod = 0;
    do {
        printf("Enter two positive integers a,b : ");
        scanf("%d %d" , &a , &b);
        if(a < 1 || b < 1) {
            printf("Error! both integers must be positive");
        }
    }while(a < 1 || b < 1);
    for(i = 0 ; i < b; i++ ) {
        prod += a;
    }
    printf("%d x %d = %d \n", a , b , prod);
    //second version
    int A,A_copy,B,div = 0;
    do {
        printf("Enter two positive integers a,b such that a > b : ");
        scanf("%d %d" , &A , &B);
        if(A < 1 || B < 1 || B > A) {
            printf("Error! both integers must be positive and a > b");
        }
    }while(A < 1 || B < 1 || B > A);
    A_copy = A;
    while(A_copy >= B) {
        A_copy -= B;
        div++;
    }
    printf("The integer division %d / %d = %d \n ", A , B , div);
    return 0;
}