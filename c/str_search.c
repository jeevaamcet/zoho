#include <stdio.h>
#include <string.h>

int main()
{
    int count = 0, max, n1, n2;
    char a[50], b[50];
    
    scanf("%[^\n]s", a);

    n1 = strlen(a);
    
    scanf("%s%n", b, &n2);

    for(int i = 0; i < n1;)
    {
        int j = 0;

        if(b[j] == a[i])
        {
            count = 0;

            while ((b[j] == a[i]) && (b[j] != '\0'))
            {   
                count++;
                j++;
                i++;
                
            }
            if( max < count)
            {
                max = count;
            }
        }
        i++;
    }

    if( max == n2-1)
    {
        printf("The string is present !");
    }
    else
    {
        printf("The string is not found ");
    }
}