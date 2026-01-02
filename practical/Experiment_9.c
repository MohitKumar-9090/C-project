#include <stdio.h>
int main() {
    float principal, rate, time, interest, total;
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time in years: ");
    scanf("%f", &time);

    interest = (principal * rate * time) / 100;
    total = principal + interest;
    printf("Simple Interest: %.2f\n", interest);
    printf("Total Amount after Interest: %.2f\n", total);
    return 0;
}
