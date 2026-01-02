#include <stdio.h>
int main() {
    int age =  0, total = 0;

    for (int a = 1; a <= 10; a++) {
        printf("Enter age of employee %d: ", a);
        scanf("%d", &age);
        if (age >= 30){
           total += 1 ;
        }
    }
    printf("\nEmployees aged 30 or above = %d\n", total);

    return 0;
}
