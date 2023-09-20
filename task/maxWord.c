#include <stdio.h>
#include <string.h>
#define m 50

void *maxWord(char strs[m][m], int n)
{
    
    static char str[m];
    int i = 0, j = 0, l = 1, k;

    while (strs[i][j] != '\0')
    {
        if(strs[i][j] == strs[l][j])
        {
            str[j] = strs[i][j];
        }
        k = l + 1;
        while(k < n)
        {
            if(strs[i][j] == strs[k][j])
            {
                k++;
            }
            else
            {
                str[j] = '\0';
                break;
            }
        }
        j++;
    }
    return str;
}

void main()
{
    char strs[m][m], str[m];
    int n;
    char *p;

    printf("Enter the  no strings ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter the string %d ",i + 1);
        scanf("%s", strs[i]);
    }

    p = maxWord(strs, n);

    printf("%s", p);
}