#include<stdio.h>
#define SIZE 10
int main() {
    int i = 0,j = 0;
    int T1[SIZE];
    int T2[SIZE];

    printf("Enter T1[%d] : ",i+1);
    scanf("%d",&T1[i]);
    for(i = 1 ; i < SIZE ; i++) {
        do {
            printf("Enter T1[%d] : ",i+1);
            scanf("%d",&T1[i]);

        }while(T1[i] > T1[i-1]);
    }
    T2[0] = T1[0];
    j = 1;
    for(i = 1 ; i < SIZE ; i++) {
        if(T1[i] != T2[j-1]) {
            T2[j] = T1[i];
            j++;
        }
    }
    for(i = 0 ; i < j ; i++) {
        printf("%d ",T2[i]);
    }
    return 0;
}