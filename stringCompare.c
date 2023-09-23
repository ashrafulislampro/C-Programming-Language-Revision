#include <stdio.h>
#include <string.h>

int main()
{
    char str[1002], word[100];
    int i, j, length, is_word_started;

    printf("Enter String = ");
    gets(str);
    length = strlen(str);
    is_word_started = 0;

    for (i = 0, j = 0; i < length; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (is_word_started == 0)
            {
                is_word_started = 1;
                word[j] = 'A' + (str[i] - 'a');
                j++;
            }
            else
            {
                word[j] = str[i];
                j++;
            }
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            if (is_word_started == 0)
            {
                is_word_started = 1;
                word[j] = str[i];
                j++;
            }
            else
            {
                word[j] = 'a' + (str[i] - 'A');
                j++;
            }
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            word[j] = str[i];
            j++;
        }
        else
        {
            if (is_word_started == 1)
            {
                is_word_started = 0;
                word[j] = '\0';
                printf("Every Word Print in NewLine = %s\n", word);
                j = 0;
            }
        }
    }

    return 0;
}