#include <stdio.h>

void pair(int *a, int n, int target)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if ( (*(a + i) + *(a + j)) == target)
            {
                count++;
                printf("Pair %d is ( %d , %d )\n", count, *(a + i), *(a + j));
            }
        }
    }

    if (count == 0)
    {
        printf(" There is no pairs for given target in array ( -1, -1 )\n");
    }
    else
    {
        printf("Total number of pairs for given target is %d\n", count);
    }
}

void main()
{
    int arr[50], target, n;

    printf("Enter the number of elements in tha array :");
    scanf("%d", &n);

    printf("Enter the array elements :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr+i);
    }

    printf("Enter the target to find pairs :");
    scanf("%d", &target);

    pair(arr,n,target);
}

