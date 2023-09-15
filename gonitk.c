// Computer Programming 1st Part:Page-67

#include <stdio.h>

int main()
{

    int n, m, j, i;
    printf("Enter a random number : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter Second Time a random number : ");
        scanf("%d", &m);

        for (j = 10; j <= m; j++)
        {
            if (j % 11 == 0)
            {
                continue;
            }
            printf("The result is : %d\n", j);
        }
    }
    return 0;
}