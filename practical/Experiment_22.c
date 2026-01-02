#include <stdio.h>
int main() {
    int status, totalPresent = 0;
    for (int day = 1; day <= 30; day++) {
        printf("Day %d (1=Present, 0=Absent): ", day);
        scanf("%d", &status);
        if (status == 1) {
            totalPresent++;
        }
        else{
            totalPresent = totalPresent;
        }
    }
    printf("Total present days = %d\n", totalPresent);
    return 0;
}
