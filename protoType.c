#include <stdio.h>

double add(double n1, double n2);
int main()
{
    double a = 2.8, b = 2.7, c;

    c = add(a, b);
    // c = a + b;
    printf("The result is = %lf\n", c);
    return 0;
}

double add(double num1, double num2)
{
    double sum = num1 + num2;
    return sum;
}