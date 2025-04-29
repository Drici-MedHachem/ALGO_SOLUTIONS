#include<stdio.h>

int main() {
    int f_0 = 0;
    int f_1 = 1;
    int n,f_n ,temp,i =2;
    do {
        printf("Enter the which fibonnaci term to calculate : ");
        scanf("%d",&n);

    }while(n < 2);

    printf("F(0) = 0 \nF(1) = 1 \n");
    while(i< n) {
        f_n = f_0 + f_1;
        f_0 = f_1;
        f_1 = f_n;
        printf("F(%d) = %d \n",i,f_n);
        i++;
    }    
    return 0;
}