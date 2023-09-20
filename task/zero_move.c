#include <stdio.h>

void mov_zero(int *a, int n)
{
    int temp, j = 0;

    for (int i = 0; i < n && j < n;)
    {
        
        if ((*(a + i) == 0))
        {        
            if (*(a + j) != 0)
            {
                temp = *(a + j);
                *(a + j) =*(a + i);
                *(a + i) = temp; 
            }
            else
            {
                j++;
            }
        }
        else 
        {
            i++;
            j++;
        }
    }
}

void get_arr (int *a, int n)
{
    printf("Enter the elements of array :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", a+i);
    }
}

void prt (int *a, int n)
{
    printf("The resulted array is :");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(a+i));
    }
    // printf("\n");
}

void main()
{
    int arr[50], n;

    printf("Enter the number of elements in array ");
    scanf("%d", &n);

    get_arr(arr, n);

    mov_zero(arr,n);

    prt(arr,n);
}
