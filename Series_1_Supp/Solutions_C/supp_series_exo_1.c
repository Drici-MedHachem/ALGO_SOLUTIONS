#include<stdio.h>

int main() {
    int hours;
    int cost;
    scanf("%d", &hours);
    if(hours <= 0) {
        printf("Error\n");
    } else {
        if(hours <= 5) {
            cost = hours * 50;
        } else if (hours <= 10) {
            cost = 5 * 50 + (hours - 5) * 40;
        } else {
            cost = 5 * 50 + 5 * 10 + (hours - 10) * 30;
        }
    }
    printf("The total cost is %d\n", cost); 

    return 0;
}