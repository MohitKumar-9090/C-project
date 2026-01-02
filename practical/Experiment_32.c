#include <stdio.h>

void calculate(int a, int b, int *sum, int *diff, int *prod, float *div) {
    *sum = a + b;
    *diff = a - b;
    *prod = a * b;
    if (b != 0) {
        *div = (float)a / b;
    } else {
        *div = 0.0;
    }
}

int main() {
    int num1, num2, add, sub, mul;
    float div;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    calculate(num1, num2, &add, &sub, &mul, &div);

    printf("Addition: %d\n", add);
    printf("Subtraction: %d\n", sub);
    printf("Multiplication: %d\n", mul);
    printf("Division: %.2f\n", div);

    return 0;
}