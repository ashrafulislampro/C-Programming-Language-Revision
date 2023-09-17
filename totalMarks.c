#include <stdio.h>

int main()
{
    int ft_marks[10] = {83, 86, 97, 83, 93, 60, 52, 60, 70, 85},
        st_marks[10] = {80, 86, 97, 80, 66, 60, 52, 60, 75, 88},
        fl_marks[10] = {73, 86, 97, 73, 65, 60, 52, 60, 69, 87};

    int total_marks[10], i, j;

    for (i = 0; i < 10; i++)
    {
        int marks = ft_marks[i] / 4.0 + st_marks[i] / 4.0 + fl_marks[i] / 2.0;
        total_marks[i] = marks;
    }

    for (i = 0; i < 10; i++)
    {
        // printf("Roll No: %d total marks = %d\n", i + 1, total_marks[i]);
        int count = 0;
        for (j = 0; j < 10; j++)
        {
            if (total_marks[i] == total_marks[j])
            {
                count++;
            }
        };
        printf("Roll No: %d total marks = %d Quantity = %d\n", i + 1, total_marks[i], count);
    }

    return 0;
}
