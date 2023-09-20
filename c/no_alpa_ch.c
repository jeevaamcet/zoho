#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    int i = 0, num = 0, alph = 0, ch = 0;

    printf("Enter the string : ");
    fgets(str, sizeof str, stdin);

    while( str[i] != '\0' && str[i] != '\n')
    {
        if ( str[i] >= 48 && str[i] <= 57)
        {
            str[i] -= 48;
        }

        switch (str[i])
        {
            case 0 ... 9:
            {
                num++;
                break;
            }
            case 'A' ... 'Z':
            {
                alph++;
                break;
            }
            case 'a' ... 'z':
            {
                alph++;
                break;
            }
            default :
            {
                ch++;
                break;
            }

        }
        i++;
    }

    printf("The given string has %d numbers, %d alphabets and %d character ", num, alph, ch);
}
