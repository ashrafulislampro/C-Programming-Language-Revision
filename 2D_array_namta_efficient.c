#include <stdio.h>

int main()
{

    int row, col, sum, evenNum = 0, everyNamtaEvenNum = 0;
    int namta[10][10];

    for (row = 0; row < 10; row++)
    {
        for (col = 0; col < 10; col++)
        {
            namta[row][col] = (row + 1) * (col + 1);
        }
    };

    for (row = 0; row < 10; row++)
    {

        for (col = 0; col < 10; col++)
        {
            sum += namta[row][col];
            printf("%d * %d = %d\n", (row + 1), (col + 1), namta[row][col]);
            if (namta[row][col] % 2 == 0)
            {
                evenNum++;
                everyNamtaEvenNum++;
            };
        }

        printf("Even number = %d\n", everyNamtaEvenNum);
        printf("\n");
        everyNamtaEvenNum = 0;
    };

    printf("Total Sum of the array element = %d\n and Even number = %d\n", sum, evenNum);

    return 0;
}
