#include <stdio.h>

void main()
{
    int a[50], n, rot, temp;

    printf("Enter the number of elements :");
    scanf("%d", &n);

    printf("Enter the no times to rotate :");
    scanf("%d", &rot);

    printf("Enter the elements of array :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", a + i);
    }

    if (rot < n)
    {
        for (int i = 0; i < rot; i++)
        {
            temp = *a;
            for (int j = 0; j < n; j++)
            {
                *(a + j) = *(a + j + 1);
            }
            *(a + n - 1) = temp;
        }
    }
    else
    {
        printf("Enter the valid rotate :");
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", *(a + i));
    }
}