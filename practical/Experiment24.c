#include <stdio.h>
int main()
{
    for (int i = 1; i <= 7; i++)
    {

        switch (i)
        {
        case 1:
            printf("Monday:\n");
            break;
        case 2:
            printf("Tuesday:\n");
            break;
        case 3:
            printf("Wednesday:\n");
            break;
        case 4:
            printf("Thursday:\n");
            break;
        case 5:
            printf("Friday:\n");
            break;
        case 6:
            printf("Saturday:\n");
            break;
        case 7:
            printf("Sunday:\n");
            break;
        }

        for (int j = 1; j <= 6; j++)
        {
            printf("Lecture %d\n", j); // add newline
        }

        printf("\n"); // space between days
    }

    return 0;
}
