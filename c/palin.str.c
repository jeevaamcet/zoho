#include <stdio.h>
#include <stdlib.h>

int findLen(char *s)
{
    int n = 0;
    
    while(s[n] != '\0')
    {
        n++;
    }
    return n;
}

void strCpy(char *s1, char *s2)
{
    int n = findLen(s2);
    for (int i = 0; i < n; i++)
    {
        s1[i] = s2[i];
    }
    s1[n] = '\0';
}

char *palind(char *a, int i, int j)
{
    int n = (j - i) / 2;
    int flag = 0, len = 0, m = j, l = i;
    char *str = malloc(sizeof(char) * 50);

    for (int k = 0; k <= n; k++)
    {
        if (a[l++] == a[m--])
        {
            flag = 1;
        }
        else
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {

        for ( int k = 0; i <= j; i++)
        {
            str[k++] = a[i];
        }
    }
    return str;
}

void palinSearch(char *s)
{
    int i = 0, j;
    char *str;
    char max[100];

    while (s[i] != '\0')
    {
        j = i + 1;

        while (s[j] != '\0')
        {
            if (s[i] == s[j])
            {
                str = palind(s, i, j);
                if ( findLen(str) > findLen(max))
                {
                    strCpy(max,str);
                }
            }
            

            j++;
        }

        i++;
    }

    printf("%s",max);
}

void main()
{
    char s[50];

    printf("Enter the string :");
    scanf("%s", s);

    palinSearch(s);
}