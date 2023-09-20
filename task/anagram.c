#include <stdio.h>
#include <string.h>

void sort(char *a, int n)
{
    char temp;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((*(a + i)) < (*(a + j)))
            {
                temp = *(a + i);
                *(a + i) = *(a + j);
                *(a + j) = temp;
            }
        }
    }
}

void  strLen(char *a, int *n)
{
    int i = 0;

    while ( *(a + i) != '\0' )
    {
        i++;
    }
    *n = i;
}

void anagram(char *a, char *b, int *count)
{
    int i = 0, j = 0;

    while ((*(a + i) != '\0'))
    {
        if(*(a + i) == *(b + j))
        {
            i++;
            j++;
            count++;
        }
        else
        {
            break;
        }
    }
    
}

void main()
{
    char str1[50], str2[50];
    int n = 0, count = 0, n2 = 0;

    printf("enter the string 1 to check ");
    scanf("%s", str1);

    printf("enter the string 2 to check ");
    scanf("%s", str2);

    strLen(str1, &n);
    strLen(str2, &n2);

    sort(str1, n);
    sort(str2, n);

    anagram(str1, str2, &count);

    if((n == n2) &&(count == n))
    {
        printf("The given strings are anagram :");
    }
    else
    {
        printf("The given strings are not anagram ");
    }
}