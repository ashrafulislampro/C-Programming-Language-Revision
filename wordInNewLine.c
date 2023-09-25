#include <stdio.h>
#include <string.h>

int main()
{
    char str[1002], ch;
    int i, length, is_word_started;

    printf("Enter your string : ");
    gets(str);
    length = strlen(str);
    is_word_started = 0;

    for (i = 0; i < length; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (is_word_started = 0)
            {
                is_word_started = 1;
                ch = 'A' + str[i] - 'a';
                printf("%c", ch);
            }
            else
            {
                printf("%c", str[i]);
            }
        }
        else if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= '0' && str[i] <= '9')
        {
            if (is_word_started = 0)
            {
                is_word_started = 1;
                ch = 'a' + (str[i] - 'A');
                printf("%c", ch);
            }
            else
            {
                printf("%c", str[i]);
            }
        }
        else
        {
            if (is_word_started = 1)
            {
                is_word_started = 0;
                printf("\n");
            }
        }
    }
    printf("\n");
    return 0;
}