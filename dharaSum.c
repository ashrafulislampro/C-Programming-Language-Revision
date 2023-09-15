#include <stdio.h>

int main()
{
    double n, s;

    printf("nth path\n");
    scanf("%lf", &n);

    s = (n * (n + 1)) / 2;

    printf("SUMMATION = %0.2lf\n", s);

    return 0;
}