#include<stdio.h>

int main()
{

    int x;

    printf("Enter the two number:");
    scanf("%d",&x);

    switch (x)
    {
        case 0 ... 100:{
            switch(x){
                case 0 ... 50:{
                    printf("the number  50 is %d",x);
                    break;
                }
                case 51 ... 100:{
                    printf("the number  100 is %d",x);
                    break;
                }
            }
            break;
           
        }
        case 101 ... 200:{
            printf("the 101 to 200 number is %d",x);
            break;
        }
    }
}