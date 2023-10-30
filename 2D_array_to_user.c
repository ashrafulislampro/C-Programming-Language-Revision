#include <stdio.h>

int main()
{
    int i, j, col;
    int marks[4][3];

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter a Random number:");
            scanf("%d", &marks[i][j]);
        }
    }

    for (col = 0; col < 3; col++)
    {
        marks[3][col] = marks[0][col] / 4.0 + marks[1][col] / 4.0 + marks[2][col] / 2.0;
        printf("Total Marks : Roll No. = %d  marks = %d\n", col + 1, marks[3][col]);
    }

    return 0;
}