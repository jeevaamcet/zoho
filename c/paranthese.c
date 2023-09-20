#include <stdio.h>
#include <string.h>


int main()
{
    char s[100];
    int i = 0, flag  = 0;

    scanf("%s",s);

    while ( i < strlen(s))
    {
        if( i == 0 || s[i] == '('&&( flag == 0))
        {
            s[i] = " ";
            flag  = 1;

        }
        else if (( s[i] == ')') && (flag == 1))
        {
            s[i] = " ";
            flag = 0;
        }
        else  
        {
            if(s[i] == '(')
            {
                flag += 1;
            }
            else if(s[i] == ')' )
            {
                flag -= 1;
            }
        }
        i++;
    }

    printf("%s", s);


}