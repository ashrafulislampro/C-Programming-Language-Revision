#include <stdio.h>
int string_length(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

int string_compare(char str1[], char str2[])
{

    int i;

    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++)
    {
        if (str1[i] < str2[i])
        {
            return -1;
        }
        if (str1[i] > str2[i])
        {
            return 1;
        }
    }

    if (string_length(str1) == string_length(str2))
    {
        return 0;
    }
    else if (string_length(str1) < string_length(str2))
    {
        return -1;
    }
    else
    {
        return 1;
    }
}

int main()
{
    char str1[100], str2[100];

    printf("Enter First String = ");
    gets(str1);
    printf("Enter Second String = ");
    gets(str2);

    int result = string_compare(str1, str2);
    printf("Compare between str1 && str2 = %d\n", result);

    return 0;
}