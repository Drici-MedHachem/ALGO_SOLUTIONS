#include<stdio.h> 

int main() {
    int n,n_copy,possible_digits,digit,counter;
    do{
        printf("Enter a strictly positive integer n : ");
        scanf("%d",&n);
        if(n < 0) printf("n must be strictly positive");
    }while(n < 0);
    for(possible_digits = 0 ; possible_digits < 10 ; possible_digits++){
        counter = 0;
        n_copy = n;
        while(n_copy >= 1) {
            digit = n_copy % 10;
            n_copy /= 10;
            if(possible_digits == digit) counter++;
        }
        if(counter != 0) printf("The digit %d appeared %d times \n",possible_digits,counter);
    }
    return 0;
}