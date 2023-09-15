#include <stdio.h>

int main()
{
    int ara[10] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
    int i;

    for (i = 9; i >= 0; i--)
    {
        printf("%dth element Number is %d\n", i + 1, ara[i]);
    }

    return 0;
}