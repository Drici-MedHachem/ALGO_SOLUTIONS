#include<stdio.h>

int main() {
    //Version 1
    int n;
    printf("Enter an integer : ");
    scanf("%d", &n);
    if(n % 2) {
        printf("The number %d is odd\n", n);
    } else {
        printf("The number %d is even\n", n);
    }
    //Version 2
    if (n & 1) {
        printf("The number %d is odd\n", n);
    } else {
        printf("The number %d is even\n", n);
    }
    return 0;
}