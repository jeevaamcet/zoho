#include <stdio.h>
#include <string.h>

int cmp(int j, char *s1)
{
    int a = 0;

    int n = strlen(s1);

    for (int i = j+1; i < n; i++)
    {
        if( s1[j] != s1[i])
        {
            a++;
        }
        else
        {
            break;
        }
    }
    return a;
}

int search (char *s1, char *s2)
{
    int flag = 1;
    int n = strlen(s1);

    for ( int i = 0; i < n; i++)
    {
        if (cmp(i,s1) == cmp(i,s2))
        {
            flag = 1;
        }
        else
        {
            flag = 0;
            break;
        }
    }
    return flag;
}
void main()
{
    char s1[50], s2[50];

    printf("Enter the string 1 to check ");
    fgets(s1, sizeof s1, stdin);

    printf("Enter the string 2 to check ");
    fgets(s2, sizeof s2, stdin);

    if(search(s1,s2))
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
}