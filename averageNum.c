#include <stdio.h>

int find_average(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum / n;
}

int main()
{
    int arr[] = {34, 56, 89, 76, 90, 30, 69, 91, 35, 70};
    int n = 10;

    int average = find_average(arr, n);

    printf("average number is = %d\n", average);

    return 0;
}