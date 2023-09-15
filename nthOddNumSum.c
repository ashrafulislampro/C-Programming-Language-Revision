#include <stdio.h>

int main()
{
    int n, nth, sum;

    printf("Enter the nth element : ");
    scanf("%d", &n);

    nth = (n + 1) / 2;

    sum = nth * nth;

    printf("Odd Number Summation is = %d\n", sum);

    return 0;
}