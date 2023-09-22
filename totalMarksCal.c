#include <stdio.h>

int main()
{
    int i;
    int total_marks[] = {86, 78, 67, 89, 78, 90, 98, 78, 67, 76, 87, 85, 92, 95, 93, 88, 86, 84, 91, 90, 87, 67, 87, 98, 90, 87, 67, 87, 78, 67, 78, 67, 78, 67, 78, 67, 78, 78, 89, 80, 89, 78, 89, 90, 70, 60, 78, 89, 80, 98};

    int marks_count[101];

    for (i = 0; i < 101; i++)
    {
        marks_count[i] = 0;
    }

    for (i = 0; i < 40; i++)
    {
        marks_count[total_marks[i]]++;
    }

    for (i = 50; i <= 100; i++)
    {
        printf("Marks: %d count: %d\n", i, marks_count[i]);
    }

    return 0;
}