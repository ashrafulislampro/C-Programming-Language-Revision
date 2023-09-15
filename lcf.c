#include <stdio.h>

int main()
{

    int a, b, x, lcf, i;

    printf("Enter Random Number : ");
    scanf("%d %d", &a, &b);

    if (a < b)
        x = a;
    else
        x = b;

    for (i = x; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            int first = a / i;
            int second = b / i;
            lcf = first * second * i;
            break;
        }
    }

    printf("Least Common Factor: %d\n", lcf);

    return 0;
}
