#include <stdio.h>

int main()
{
    int marks[4][10] = {
        {80, 70, 88, 90, 67, 100, 86, 77, 97, 98},
        {80, 70, 88, 90, 67, 100, 86, 77, 97, 98},
        {75, 72, 87, 92, 67, 65, 81, 70, 70, 80},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};
    int col;

    for (col = 0; col < 10; col++)
    {
        marks[3][col] = marks[0][col] / 4.0 + marks[1][col] / 4.0 + marks[2][col] / 2.0;
        printf("Roll no = %d Total marks = %d\n", col + 1, marks[3][col]);
    }

    return 0;
}