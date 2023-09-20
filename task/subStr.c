#include <stdio.h>
#include <string.h>

int subStr(char *s, char *sub, int i)
{
    int count = 0, k = 0;
    int n = strlen(s);
    int n2 = strlen(sub);

    for (i; i <= n; i++, k++)
    {
        if (sub[k] == s[i])
        {
            count++;
        }
        if (sub[k] == '*')
        {
            for (int j = i; j < n; j++)
            {
                if (sub[k + 1] == s[j])
                {
                    count += j - i;
                    break;
                }
            }
        }
    }

    if (count == n2 + 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void main()
{
    char sub[50], str[50];
    int n, n2;

    printf("Enter the string : ");
    scanf("%s", str);

    printf("Enter the substring to check : ");
    scanf("%s", sub);

    n = strlen(str);
    n2 = strlen(sub);

    int i = 0;

    for (int j = 0; j < n; j++)
    {
        if (sub[i] == str[j] || (sub[i + 1] == str[j + 1]))
        {
            if (subStr(str, sub, j))
            {
                printf("TRUE\n");
                break;
            }
            else
            {
                printf("FALSE\n");
            }
        }
    }
}
