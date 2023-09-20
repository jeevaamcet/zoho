#include <stdio.h>
#include <string.h>

int str_check(char x[50], char y[50])
{

    int count, n1, n2;

    n1 = strlen(x);
    n2 = strlen(y);

    for ( int  i = 0; i < n2; i++)
    {
        for (int j = i; j < n2+i; j++)
        {
            count = 1;
            if (x[j] != y[j-i])
            {
                count = 0;
                break;
            }
        }
        if(count == 1)
        {
            break;
        }
    }
    
    return count;
}

int main()
{
    char str[50], sub[50];

    printf("enter the string : ");
    fgets(str, sizeof str, stdin);

    printf("enter the substring to check :");
    fgets(sub, sizeof sub, stdin);

    if( str_check(str,sub) != 0)
    {
        printf("the main string has sub string \n");
    }
    else
    {
        printf("the main string has not have sub string ");
    }

    return 0;
}