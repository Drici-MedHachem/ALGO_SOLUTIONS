#include<stdio.h>

int main() {
    float average;
    printf("Enter the average of the student : ");
    scanf("%f", &average);
    if(average < 0 || average > 20) {
        printf("Error");
    } else {
        if(average <= 9.99) {
            printf("Echec\n");
        } else if(average <= 13) {
            printf("Passable\n");
        } else if(average <= 15.99) {
            printf("Bien\n");
        } else if(average <= 19) {
            printf("Tres Bien\n");
        } else {
            printf("Excellent\n");
        }
    }
}