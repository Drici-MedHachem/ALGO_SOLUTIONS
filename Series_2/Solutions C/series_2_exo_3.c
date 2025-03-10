#include<stdio.h>

int main() {
    int n , S_1=0;
    float a , x , S_2 = 0 , S_3 = 0, S_4 = 0;
    //S_1
    do{
        printf("Enter an odd number n between 20 and 100: ");
        scanf("%d",&n);
        if(n < 20 || n > 100 || n % 2 != 1) {
            printf("The number must me odd and between 20 and 100");
        }
    }while(n < 20 || n > 100 || n % 2 != 1);
    int i = 1;
    int sign = 1;
    while(i <= n) {
        S_1 += i * sign;
        sign = -sign;
        i += 2;
    }
    printf("S_1 = %d \n",S_1);
    //S_2
    do{
        printf("Enter an integer n between 10 and 50");
        scanf("%d",&n);
        if(n < 10 || n > 50 ) {
            printf("The number n must be between 10 and 50");
        }
    }while(n < 10 || n > 50);
    for(i = 1 ; i <= n ; i++) {
        S_2 += (float) i / (2*i-1);
    }
    printf("S_2 = %f \n",S_2);
    //S_3
    do{
        printf("Enter an integer n strictly greater than 5 and a real number x");
        scanf("%d %f",&n,&x);
        if(n < 5) {
            printf("n must be strictly greater than 5");
        }
    }while(n < 5);
    int fact = 1;
    for(i = 1 ; i <= n+1 ; i++) {
        S_3 = (float)(x+i-1) / fact;
        fact *= (i+1);
    }
    printf("S_3 = %f \n",S_3);
    //S_4
    do{
        printf("Enter two real numbers a , x and an integer n greater than 10 ");
        scanf("%f %f %d",&a,&x,&n);
        if(n < 10) {
            printf("The number n must be greater than 10");
        }
    }while(n < 10);
    for(i = 2 ; i < n ; i++) {
        x *= x;
    }
    for( i = 1 ; i <= n ; i++) {
        S_4 += a * x;
        a *= a;
        x /= x;
    }
    printf("S_4 = %f", S_4);
    return 0;
}