#include <stdio.h>

int main()
{
    int a, b, x, lcf, i;

    // printf("Enter Random Number : ");
    scanf("%d %d", &a, &b);

    if (a < b)
        x = a;
    else
        x = b;
}

// int main()
// {
//     int a, b, c, x, lcf, i;

//     printf("Enter Random Number for LCF : ");
//     scanf("%d %d %d", &a, &b, &c);

//     if (a < b && a < c)
//         x = a;
//     else if (b < a && b < c)
//         x = b;
//     else
//         x = c;

//     int first = a / x;
//     int second = b / x;
//     int third = c / x;

//     lcf = first * second * third * x;

//     // for(i = x; i >= 1; i--){

//     // }

//     printf("LCF is = %d \n", lcf);

//     return 0;
// }