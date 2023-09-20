#include <stdio.h>
#include <stdlib.h>

int findLen(char *s)
{
    int n = 0;

    while (s[n] != '\0')
    {
        n++;
    }

    return n;
}

struct str
{
    int count;
    char s[50];
};

void strCpy(char *s1, char *s2)
{
    int n = findLen(s2);
    for (int i = 0; i < n; i++)
    {
        s1[i] = s2[i];
    }
    s1[n] = '\0';
}

int comparestr(char *a1, char *a2, int n)
{
    if (findLen(a1) != findLen(a2))
    {
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (a1[i] != a2[i])
        {
            return 0;
        }
    }

    return 1;
}

char *cutStr(char *str, int a, int b)
{
    char *s = malloc(sizeof(char) * 50);

    for (int i = 0; a <= b; i++)
    {
        s[i] = str[a++];
    }
    // s[a] = "\0";

    return s;
}

void main()
{
    char string[100], *sub;
    int j = 0, k = 0, n, flag;
    struct str s1[50];

    scanf("%[^\n]s", string);

    n = findLen(string);

    for (int i = 0; i <= n; i++)
    {
        if (string[i] == ' ' || string[i] == '\0')
        {
            sub = cutStr(string, j, i - 1);
            j = i + 1;
            flag = 0;
            for (int l = 0; l <= k; l++)
            {
                if (comparestr(s1[l].s, sub, findLen(sub)))
                {
                    flag = 1;
                    s1[l].count += 1;
                    break;
                }
            }
            if (flag == 0)
            {
                strCpy(s1[k].s, sub);
                s1[k++].count = 1;
            }
        }
    }

    for (int i = 0; i < k; i++)
    {
        printf("%s - %d\n", s1[i].s, s1[i].count);
    }

    for (int i = 0; i < k; i++)
    {
        for (int j = i; j < k; j++)
        {
            if (s1[i].count < s1[j].count)
            {
                s1[k + 1].count = s1[i].count;
                strCpy(s1[k + 1].s, s1[i].s);
                s1[i].count = s1[j].count;
                strCpy(s1[i].s, s1[j].s);
                s1[j].count = s1[k + 1].count;
                strCpy(s1[j].s, s1[k + 1].s);
            }
        }
    }

    printf("+++++++++++++++++++++++++++\n");

    for (int i = 0; i < k; i++)
    {
        printf("%s - %d\n", s1[i].s, s1[i].count);
    }
}