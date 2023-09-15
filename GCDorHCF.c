#include <stdio.h>

int main()
{
    int a, b, x;

    printf("Enter First Random Number : ");
    scanf("%d", &a);
    printf("Enter Second Random Number : ");
    scanf("%d", &b);

    if (a < b)
        x = a;
    else
        x = b;

    if (a % x == 0 && b % x == 0)
    {
        printf("Greatest Common Divisor for %d && %d is %d\n", a, b, x);
    }
    else
    {
        for (int i = x; i > 0; i--)
        {
            if (a % i == 0 && b % i == 0)
            {
                printf("Greatest Common Divisor for %d && %d is %d\n", a, b, i);
                break;
            }
        }
    }

    return 0;
}