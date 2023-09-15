#include <stdio.h>

int main()
{
    double x, y, c1, c2;

    printf("Enter the Value of x + y : ");
    scanf("%lf", &c1);
    printf("Enter the Value of x - y : ");
    scanf("%lf", &c2);

    x = c1 + c2 / 2;
    y = c1 - c2 / 2;

    printf("x = %0.2lf, y = %0.2lf\n", x, y);

    return 0;
}