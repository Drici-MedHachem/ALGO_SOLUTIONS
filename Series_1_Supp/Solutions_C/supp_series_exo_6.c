#include<stdio.h>

int main() {
    int a,b,c,first,second,third;
    printf("Enter three integers : ");
    scanf("%d %d %d", &a, &b, &c);
    
    if(a >= b) {
        first = a;
        if(b >= c) {
            second = b;
            third = c;
        } else {
            second = c;
            third = b;
        }
    } else {   
        if(a >= c) {
            second = a;
            first = b;
            third = c;
        } else {
            second = c;
            first = b;
            third = a;
        }
    }
    printf("The integers in ascending order are : %d %d %d\n", third, second, first);
    
    return 0;
}