#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int freq[200], index;

    printf("enter the string to check the freq : ");
    scanf("%[^\n]s",str);

    for (int i = 0; i < 200; i++)
    {
        freq[i] = 0;
    }

    for (int i = 0; i < strlen(str); i++)
    {
        freq[str[i]] += 1;
    }
    int max = 0;
    for (int i = 0; i  < strlen(str); i++)
    {
        if (freq[str[i]] > max)
        {
            max = freq[str[i]];
            index = i;
        }
    }

    printf("the max frequency of %c is %d",str[index], max);
}