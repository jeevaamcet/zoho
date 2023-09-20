#include <stdio.h>

struct map
{
    char word [50];
    char key;
}m[2];

int findLen(char *s)
{
    int n = 0;
    
    while(s[n] != '\0')
    {
        n++;
    }

    return n;
}

void catStr(char *a, char *b)
{

    int k = findLen(a);
    int j = findLen(b);

    for (int i = 0; i < j; i++)
    {
        a[k++] = b[i];
    }
    a[k] = '\0';
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

void makePat(char *a, struct map *m, char *s)
{
    int i = 0, j, n = 2;

    while (a[i] != '\0')
    {
        j = 0;

        while (j < n)
        {
            if(a[i] == m[j].key)
            {
                catStr(s,m[j].word);
            }
            j++;
        }
        i++;
    }
}

int checkWord (char *a, char *b)
{
    int i = 0;

    while(a[i] != '\0')
    {
        if(a[i] != b[i])
        {
            return 0;
        }
        i++;
    }
    
    return 1;
}

void main()
{
    struct map m[2];

    char s[100], p[10], dum[100];

    strCpy(m[0].word,"code");
    strCpy(m[1].word,"sleep");

    m[0].key = 'x';
    m[1].key = 'y';

    printf("Make sure word and key pair  are following only \n code = x\n sleep = y\n");

    printf("Enter the string : ");
    scanf("%s", s);

    printf("Enter the pattern to check :");
    scanf("%s",p);

    makePat(p,m,dum);

    if(checkWord(s,dum))
    {
        printf("\nTRUE \n");
    }
    else
    {
        printf("\nFALSE\n");
    }
}