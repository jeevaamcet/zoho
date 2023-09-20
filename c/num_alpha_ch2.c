#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[50];
    int len, num = 0, alpha = 0, ch = 0;

    printf("Enter the string : ");
    scanf("%s%n", str, &len);

    for (int i = 0; i < len; i++)
    {
        if (isdigit(str[i]) != 0)
        {
            num++;
        }
        else if ((isalpha(str[i]) != 0))
        {
            alpha++;
        }
        else
        {
            ch++;
        }
    }

    printf("The given string has %d of numbers, %d of alphabets and %d of characters !", num, alpha, ch);
}