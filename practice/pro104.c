#include<stdio.h>

int main()
{
    int x,count=0;
    while(1<2)
    {
        puts("Enter the number:");
        scanf("%d",&x);
        if(x%5==0)
        {
            count++;
        }
        if(x==0)
        {
            break;
        }
    }
    printf("5 multiples = ",&count);
    
    return 0;
}

