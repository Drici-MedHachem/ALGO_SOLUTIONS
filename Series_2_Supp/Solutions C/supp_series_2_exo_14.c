#include<stdio.h>

int main() {
    int cnt = 1,n,i = 3,j,isPrime = 1,sum;
    do {
        printf("Enter the number n to calculate the sum of primes up to n : ");
        scanf("%d",&n);
    } while(n < 1);
    if(n == 1) {
        sum = 2;
    }  else {
        sum = 2;
        while(cnt <= n) {
            for(j = 2 ; j < n/2 ; j++) {
                if(i % j == 0) {
                    isPrime = 0;
                }
            }
            if(isPrime) {
                sum += i;
                cnt++;
            }

            isPrime = 1;
            i++;
        }
    }
    print("The sum of the first %d prime numbers : %d",n,sum);
    return 0;

}