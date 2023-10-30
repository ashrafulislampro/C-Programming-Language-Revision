#include <stdio.h>

int main()
{
    int namta[10][10];

    int i, j;

    for (i = 1; i <= 10; i++)
    {
        printf("Sequencely print namta: %d\n", i);
        for (j = 1; j <= 10; j++)
        {
            printf("%d * %d = %d\n", i, j, i * j);
        }
    };

    return 0;
}