#include <stdio.h>
#include <string.h>

int main()
{
    char a[50];
    int n, flag = 1;
    
    printf("Enter the string to check : ");
    scanf("%[^\n]s", a);

    n = strlen(a);

    int l = (n % 2 == 0) ? (n/2) : (n/2 + 1);
    
    for(int i = 0, j = n-1; i < l; i++, j--)
    {
        if(a[i] == ' ' || a[j] == ' ')
        {
            if( a[i] ==' ')
            {
                i++;
            }
            if( a[j] == ' ')
            {
                j--;
            }
        }
        if(a[i] != a[j])
        {
            flag = 0;
            break;
        }

    } 
    if(flag == 1)
    {
        printf("The given string is palindrome : ");
    }
    else
    {
        printf("The given string is not palindrome : ");
    }
}