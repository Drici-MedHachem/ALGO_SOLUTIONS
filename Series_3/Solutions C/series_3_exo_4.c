#include<stdio.h>
#define MAX 100
int main() {
    int n,i,j,tmp;
    int T[MAX];
    do {
        printf("Enter the size of the array : ");
        scanf("%d",&n);
    }while(n <= 0 || n > MAX );
    for(i = 0 ; i < n ; i++) {
        printf("Enter the element T[%d] : ",i+1);
        scanf("%d",&T[i]);
    }
    for(i = 0 ; i < n-1 ; i++) {

        for(j = i+1 ; j < n ; j++) {
            if(T[j] < T[i]) {
                tmp = T[i];
                T[i] = T[j];
                T[j] = tmp;
            }
        }
    }
    printf("Sorted in ascending order : \n");
    for(i = 0 ; i < n ; i++) {
        printf("%d ",T[i]);
    }
    return 0;
}