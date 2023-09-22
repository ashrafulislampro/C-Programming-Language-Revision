#include <stdio.h>

int main()
{
    int arr[] = {45, 60, 65, 67, 70, 75, 80, 85, 87, 88};
    int low_index = 0;
    int high_index = 9;
    int mid_index;
    int num = 85;

    while (low_index <= high_index)
    {
        mid_index = (low_index + high_index) / 2;

        if (num == arr[mid_index])
        {
            break;
        }
        else if (num < arr[mid_index])
        {
            high_index = mid_index - 1;
        }
        else
        {
            low_index = mid_index + 1;
        }
    }

    if (low_index > high_index)
    {
        printf("%d element is not found in the array\n", num);
    }
    else
    {
        printf("%d is found in the array. It is the %dth element of the array\n", arr[mid_index], mid_index);
    }

    return 0;
}