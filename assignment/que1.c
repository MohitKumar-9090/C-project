#include <stdio.h>

// User-defined function to swap two numbers
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("\nBefore Swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    // Call by reference
    swap(&x, &y);

    printf("\nAfter Swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
