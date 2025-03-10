#include<stdio.h>

int main() {
    float a,b,res;
    char op;
    printf("Enter an operation: ");
    scanf("%f %c %f", &a, &op, &b);
    
    if(op == '/' && b == 0) {
        printf("Division by zero is not allowed\n");
    } else {
        if(op == '+') { res = a+b; printf("Result: %f\n", res);}
        else if (op == '-') {res = a-b; printf("Result: %f\n", res);}
        else if (op == '*') {res = a*b; printf("Result: %f\n", res);}
        else if (op == '/') {res = a/b;  printf("Result: %f\n", res);}
        else printf("Invalid operation\n");
           
    }
    return 0;
}