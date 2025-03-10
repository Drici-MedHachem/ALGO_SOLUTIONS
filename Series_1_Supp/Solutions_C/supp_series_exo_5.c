#include<stdio.h>

int main() {
    int n;
    printf("Enter an integer between 100 and 999 : ");
    if(n < 100 || n > 999) {
        printf("Error \n");
    } else {
        int first_digit = n / 100;
        int last_digit = n % 10;
        if(first_digit == last_digit) {
            printf("The number is palindrome \n");
        } else {
            printf("The number is not palindrome \n");
        }
    }
    return 0;
}