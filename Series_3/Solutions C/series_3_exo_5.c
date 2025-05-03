#include<stdio.h>
#define MAX 100
#define MIN 10
int main() {
    int i,x,left,right,mid,isFound = 0,n;
    int T[MAX];
    do {
        printf("Enter the size of the array between 10 and 100 : ");
        scanf("%d",&n);

    }while(n < MIN || n > MAX );
    printf("Enter the value you want to look for : ");
    scanf("%d",&x);
    printf("Enter T[1] : ");
    scanf("%d",&T[0]);

    for(i = 1 ; i < n ; i++) {
        do {
            printf("Enter in ascending order the value of T[%d] : ",i+1);
            scanf("%d",&T[i]);
        }while(T[i] <= T[i-1] );
    }
    left = 0;
    right = n-1;
    while(left <= right) {
        if (x == T[mid]) {
            isFound = 1;
            break;
        } else if (x > T[mid]) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }        
    }

    if(isFound) printf("The element was found at index %d : ",mid);
    else printf("The element was not found");
    return 0;
}