/* A fitness app stores walking distance (in km) for 30 days. 
Write a program to input daily distance and find total kilometers walked in the month.*/
#include <stdio.h>
int main(){
    float distance, total = 0;
    
    for(int i = 1; i <= 30; i++) {
        printf("Enter distance walked on day %d (km): ", i);
        scanf("%f", &distance);
        total += distance;
    }
    
    printf("\nTotal distance walked = %.2f km", total);
    
    return 0;
}
