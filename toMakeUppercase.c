#include <stdio.h>

int main()
{
    char country[] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h', ' ', 'i', 's', ' ', 'm', 'y', ' ', 'c', 'o', 'u', 'n', 't', 'r', 'y', '\0'};

    printf("Country = %s\n", country);

    int length = 24;

    for (int i = 0; i < length; i++)
    {
        if (country[i] >= 97 && country[i] <= 122)
        {
            country[i] = 'A' + (country[i] - 'a');
        }
    }

    printf("Country = %s\n", country);

    return 0;
}