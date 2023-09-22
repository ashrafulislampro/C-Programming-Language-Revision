#include <stdio.h>

int main()
{
    char country[] = {'B', 'A', 'N', 'G', 'L', 'A', 'D', 'E', 'S', 'H', ' ', 'I', 'S', ' ', 'M', 'Y', ' ', 'C', 'O', 'U', 'N', 'T', 'R', 'Y', '\0'};

    printf("Country = %s\n", country);

    int length = 24;

    for (int i = 0; i < length; i++)
    {
        if (country[i] >= 65 && country[i] <= 90)
        {
            country[i] = 'a' + (country[i] - 'A');
        }
    }

    printf("Country = %s\n", country);

    return 0;
}