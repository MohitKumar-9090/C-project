#include <stdio.h>

int main()
{
    float balance;
    float interest = 500;
    float maintenance = 200;
    float bonusFactor = 1.10;

    printf("Enter initial account balance: ");
    scanf("%f", &balance);

    balance += interest;
    printf("After adding interest: %.2f\n", balance);

    balance -= maintenance;
    printf("After maintenance charge: %.2f\n", balance);

    balance *= bonusFactor;
    printf("After bonus reward: %.2f\n", balance);

    balance /= 2;
    printf("After dividing into two linked accounts: %.2f\n", balance);

    return 0;
}
