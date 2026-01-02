#include <stdio.h>

int main() {
    int a, b, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    max = a * (a >= b) + b * (b > a);

    printf("Greater number: %d\n", max);

    return 0;
}
