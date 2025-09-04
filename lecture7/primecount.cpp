#include <stdio.h>
int main()
{
    int num;
    int i, j;
    int count = 0;
    printf("Enter Number=");
    scanf("%d", &num);
    for (i = 2; i < num; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (i == j)
        {
            count++;
        }
    }
    printf("no of prime nos is %d", count);

    return 0;
}
