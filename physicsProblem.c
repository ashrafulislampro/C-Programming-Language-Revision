// 2t সময়ে অতিক্রান্ত দূরত্ব

#include <stdio.h>

int main()
{
    double t, v, s;

    printf("Enter Time duration : ");
    scanf("%lf", &t);
    printf("Enter Velocity : ");
    scanf("%lf", &v);

    s = 2 * t * v;

    printf("Distance Traveled S =%0.2lf\n ", s);
    return 0;
}