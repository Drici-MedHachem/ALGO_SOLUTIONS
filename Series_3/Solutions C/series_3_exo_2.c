#include<stdio.h>
#define MAX 100
#define MIN 10
int main(){
    int n,i,temp;
    int T[MAX];
    do {
        printf("Enter the size of the array between 10 and 100 : ");
        scanf("%d",&n);
    }while(n < MIN || n > MAX);
    for(i = 0 ; i < n ; i++) {
        printf("Enter T[%d] : ",i+1);
        scanf("%d",&T[i]);
    }

    for(i = 0 ; i < n ; i++) {
        printf("%d ",T[i]);
    }
    for(i = 0 ; i < n/2 ; i++) {
        temp = T[i];
        T[i] = T[n-1-i];
        T[n-1-i] = temp;
    }
    printf("\n");
    for(i = 0 ; i < n ; i++) {
        printf("%d ",T[i]);
    }
    return 0;
}