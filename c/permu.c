#include <stdio.h>

int fac(int n)
{
    int f = 1;
    for (int i = 1; i < n; i++)
    {
        f *= i;
    }
    return f;
}

void rotate(char *a, int n)
{
    char temp;
    int j;
    for (int i = 0; i == 0; i++)
    {
        temp = a[i];
        // printf("%c",temp);
        for (j = i; j < n; j++)
        {
            a[j] = a[j + 1];
            // printf("%c",a[j]);
        }
        a[j - 1] = temp;
        // printf("%c",a[j]);
    }
}

void main()
{
    char s[100];
    int n;
    int k;

    scanf("%s", s);
    n = strlen(s);

    for (int i = 0; i < n; i++)
    {
        k = 0;
        while (k < n - 1)
        {
            printf("%c", s[0]);
            for (int j = 1; j < n; j++)
            {
                printf("%c", s[j]);
            }
            printf("\n");
            printf("%c", s[0]);
            for (int j = n - 1; j > 0; j--)
            {
                printf("%c", s[j]);
            }
            k++;
            rotate(s, n);
            printf("\n");
        }
        
    }
}