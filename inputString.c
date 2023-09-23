#include <stdio.h>

int main()
{
    char ch[100];

    printf("Enter a Sentence : ");
    gets(ch);
    // scanf("%s", ch);

    printf("Result is = %s\n", ch);
    return 0;
}