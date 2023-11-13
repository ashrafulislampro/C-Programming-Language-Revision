#include <stdio.h>

int main()
{
    char saarc[7][100] = {
        "Bangladesh", "India", "Sri Lanka", "Pakistan", "Bhutan", "Nepal", "Maldives"};

    int row;

    for (row = 0; row < 7; row++)
    {
        printf("Saarc Country = %s\n", saarc[row]);
    }

    return 0;
}