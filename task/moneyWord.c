#include <stdio.h>

void moneyWord(int num, int d)
{
    int m;
    char ones[20][10] = {"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","ninteen"};
    char twos[20][10] = {"twenty","thirdty","forty","fifty","sixty","seventy","eighty","ninty"};
    
    while (num != 0)
    {
        m = num/d;
        switch (d)
        {
        case 100000:
            {
                if(m)
                {
                    if (m  > 9)
                    {
                        moneyWord(m, 10);
                        m = 0;
                    }
                    if (m <= 9)
                    {
                       printf("%s lakhs and ", ones[m-1]);
                       break;
                    }
                }
            }
        case 1000:
            {
                if(m)
                {
                    if (m  > 9)
                    {
                        moneyWord(m, 10);
                        m = 0;
                    }
                        if (m <= 9)
                    {
                        printf("%s thousands and ", ones[m-1]);
                        break;
                    }
                }
                
            }
        case 100:
            {
                if (m)
                {
                    printf(" %s hundreds and ",ones[m-1]);
                    break;
                }
            }
        case 10:
            {
                if (m > 1)
                {
                    printf(" %s ",twos[m-2]);
                    break;
                }
                if (m == 1)
                {
                    printf(" %s",ones[num-1]);
                    break;
                }
            }
        case 1:
            {
                printf(" %s",ones[m-1]);
                break;
            }

        }
        if(d == 100000)
        {
            num = num % d;
            d /= 100;
        }
        else
        {
            num = num % d;
            d /= 10;
        }
    }
}

void main()
{
    int num, d = 100000;
    

    printf("Enter the number from range of 1 to 9,99,999 ");
    scanf("%d", &num);

    moneyWord(num,d);

}