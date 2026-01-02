#include <stdio.h>

// Function to find maximum using pointers
int findMax(int *a, int *b)
{
    if (*a > *b)
        return *a;
    else
        return *b;
}

int main()
{
    int x, y, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    // Function call with addresses
    max = findMax(&x, &y);

    printf("Maximum number = %d\n", max);

    return 0;
}
