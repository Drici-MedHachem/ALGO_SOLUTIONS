#include<stdio.h>

int main() {
    int n,m,number,div,div_sum;
    do{
        printf("Enter two strictly positive integers n , m such that n < m : ");
        scanf("%d %d",&n , &m);
        if(n < 0 || m < 0 || n > m) printf("n , m must be strictly postiive and n < m");
    }while(n < 0 || m < 0 || n > m);

    for(number  = n ; number <= m ; number++) {
        div_sum = 1;
        for(div = 2 ; div <= number/2 ; div++) {
            if(number % div == 0) {
                div_sum += div;
            }
        }
        if(div_sum == number) printf("%d is a perfect number \n",number);
    }
    return 0;
}