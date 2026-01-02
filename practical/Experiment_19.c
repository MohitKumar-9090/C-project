
#include <stdio.h>
int main() {
    int units, total = 0;

    for (int day = 1; day <= 7; day++) {
        printf("Enter units used on day %d: ", day);
        scanf("%d", &units);
        total += units;
    }

    printf("\nTotal electricity units used in a week = %d\n", total);

    return 0;
}
