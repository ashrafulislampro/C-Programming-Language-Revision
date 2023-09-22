#include <stdio.h>

int find_max(int arr[], int n)
{
    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[] = {34, 56, 89, 76, 90, 37, 69, 91, 35, 70};
    int n = 10;

    int max = find_max(arr, n);

    printf("Max number is = %d\n", max);

    return 0;
}