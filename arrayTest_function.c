#include <stdio.h>

void test_function(int arr[])
{
    arr[0] = 100;
    return;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("First Element = %d\n", arr[0]);
    test_function(arr);
    printf("First Element = %d\n", arr[0]);

    return 0;
}