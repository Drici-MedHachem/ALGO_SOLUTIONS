#include<stdio.h>

int main() {
    int dep_hours,dep_mins,ari_hours,ari_mins,travel_hours,travel_mins;
    scanf("Enter the departure time and the arrival time : %d %d %d %d", &dep_hours, &dep_mins, &ari_hours, &ari_mins);
    if(dep_hours < 0 || dep_hours > 23 || dep_mins < 0 || dep_mins > 59 || ari_hours < 0 || ari_hours > 23 || ari_mins < 0 || ari_mins > 59) {
        printf("Error\n");
    } else {
        if(dep_hours <= ari_hours) {
            travel_hours = ari_hours - dep_hours;
            if(dep_mins <= ari_mins) {
                travel_mins = ari_mins - dep_mins;
            } else {
                travel_mins = 60 - dep_mins + ari_mins;
                travel_hours--;
            }
        } else {
            travel_hours = 24 - dep_hours + ari_hours;
            if(dep_mins <= ari_mins) {
                travel_mins = ari_mins - dep_mins;
            } else {
                travel_mins = 60 - dep_mins + ari_mins;
                travel_hours--;
            }
        }
    }
    printf("The total travel time is %d hours and %d minutes\n", travel_hours, travel_mins);

    return 0;
}