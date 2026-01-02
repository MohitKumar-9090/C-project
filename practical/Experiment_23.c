#include <stdio.h>
int main()
{
    int userinp, num;
    while (1)
    {
        printf("Enter your choice:");
        scanf("%d", &userinp);
        if (userinp == 1)
        {
            printf("Enter a no. to print table:");
            scanf("%d", &num);
            for (int i = 1; i < 10; i++)
            {
                printf("%d X %d = %d\n", num, i, num * i);
            }
        }
        else if (userinp == 0)
        {
            break;
        }
        else
        {
            printf("invalid input");
        }
    }
}