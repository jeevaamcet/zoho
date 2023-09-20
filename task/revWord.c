#include <stdio.h>

void getArr(char *s)
{
    printf("Enter the string ;");
    scanf("%[^\n]s", s);
}

int findLen(char *s)
{
    int n = 0;
    while(s[n] != '\0')
    {
        n++;
    }
    return n;
}

void revWord(char s[50])
{
    char temp[50][50];
    int j = 0, i = 0,n,m;

    n = findLen(s);

    for ( int k = 0; k <= n;k++ )
    {
        if(s[k] != ' '&& s[k] != '\0')
        {
            temp[i][j++] = s[k];
        }
        else if(s[k] == ' ' || s[k] == '\0')
        {
            temp[i][j++] =' ';
            // temp[i][j] = '\0';
            i++;
            m = i;
            j = 0;
        }
    }

    i = m-1, j = 0;
    for ( int k = 0; k < n;k++ )
    {
        if(temp[i][j] != ' ')
        {
            s[k] = temp[i][j++];
        }
        else if(temp[i][j] == ' ')
        {
            s[k] = temp[i][j++];
            i--;
            j = 0;
        }
    }
}
void main()
{
    char s1[100];

    getArr(s1);

    printf("The string before reverse is :\n");
    printf("%s ",s1);

    revWord(s1);

    printf("\nThe string after reverse is :\n");
    printf("%s ",s1);
}