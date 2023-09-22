#include <stdio.h>

int find_min(int arr[], int n)
{
    int min = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int arr[] = {34, 56, 89, 76, 90, 30, 69, 91, 35, 70};
    int n = 10;

    int min = find_min(arr, n);

    printf("Min number is = %d\n", min);

    return 0;
}