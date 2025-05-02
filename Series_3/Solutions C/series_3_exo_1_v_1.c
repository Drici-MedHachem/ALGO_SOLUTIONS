#include<stdio.h>
#define SIZE 10
int main() {
    int T1[SIZE] , T2[SIZE] , T3[SIZE * 2];
    int i = 0 , j = 0 , k = 0 , t = 0;
    printf("Enter T1[%d] : ",t);
    scanf("%d",&T1[t]);
    for(t = 1 ; t < SIZE ; t++) {
        do {
            printf("Enter T1[%d] : ",t+1);
            scanf("%d",&T1[t]);
        }while(T1[t] < T1[t-1]);
    }
    printf("\n");
    t = 0;
    printf("Enter T2[%d] : ",t+1);
    scanf("%d",&T2[t]);
    for(t = 1 ; t < SIZE ; t++) {
        do {
            printf("Enter T2[%d] : ",t);
            scanf("%d",&T2[t]);
        }while(T2[t] < T2[t-1]);
    }
    while(i < SIZE && j < SIZE) {
        if(T1[i] < T2[j]) {
            T3[k] = T1[i];
            k++;
            i++;
        } else {
            T3[k] = T2[j];
            k++;
            j++;
        }
    }
    if(j == SIZE) {
        while(i < SIZE) {
        T3[k] = T1[i];
        k++;
        i++;
        }
    } else {
        while(j < SIZE) {
            T3[k] = T2[j];
            k++;
            j++;
        }
    }

    for(i = 0 ; i < SIZE * 2 ; i++) {
        printf("T3[%d] = %d \n",i+1,T3[i]);
    }
    return 0;
}