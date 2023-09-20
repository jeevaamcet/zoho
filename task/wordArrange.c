#include <stdio.h>
#include <string.h>

void rotate (char *s, int i)
{
    char temp;

    temp = s[i];

    for (i; i > 0; i--)
    {
        s[i] = s[i - 1];
    }
    s[0] = temp;
}

int compareStr(char *s1, char *s2, int n)
{
    for(int i = 0; i < n; i++)
    {
        if(s1[i] != s2[i])
        {
            return 0;
        }
    }

    return 1;
}

int checkStr(char *s1, char *s2, int n)
{

    int count = 0;

    for (int i = n-1; i >= 0; i--)
    {
        for(int j = 0; j < n; j++)
        {
            if(s1[i] == s2[j])
            {
                for(int k = 0; k < i-j; k++)
                {
                    rotate(s2, i);
                    count++;
                }
            }
            if(compareStr(s1, s2, n))
            {
                return count;
            }
        }
        
    }

    return -1;
}

void main()
{
    char s1[50], s2[50];
    int n, count;

    printf("Enter the first string : ");
    scanf("%s", s1);

    printf("Enter the second string : ");
    scanf("%s", s2);

    n = strlen(s1);

    count = checkStr(s1, s2, n);

    if(count >= 0)
    {
        printf("The number of operations required is %d ", count);
    }
    else
    {
        printf("The given two strings are not match :\n");
    }
}