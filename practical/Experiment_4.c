#include <stdio.h>
int main() {
    int a, b;
    printf("Enter first integer: ");
    scanf("%d", &a);
    printf("Enter second integer: ");
    scanf("%d", &b);
    printf("\n--- Results ---\n");
    printf("Addition: %d + %d = %d\n", a, b, a + b);
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);
    if (b != 0) {
        printf("Division: %d / %d = %d\n", a, b, a / b);
        printf("Modulus: %d %% %d = %d\n", a, b, a % b);
    } else {
        printf("Division and Modulus not possible (division by zero).\n");
    }
    return 0;
}
