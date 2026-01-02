#include <stdio.h>

void findFactorial(int n, long *result) {
    *result = 1;
    for (int i = 1; i <= n; i++) {
        *result = *result * i;
    }
}

int main() {
    int num;
    long fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        findFactorial(num, &fact);
        printf("Factorial of %d is: %ld\n", num, fact);
    }

    return 0;
}