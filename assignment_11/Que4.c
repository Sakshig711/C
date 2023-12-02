#include<stdio.h>

int main()
{
	int i,num;
	while(1<7)
	{
		printf("\nEnter the number = ");
		scanf("%d",&num);
		for(i=2; i<=num-1; i++)
		{
			if (num%i==0)
			{
				printf("\nNot prime");
				break;
			}
			else
			{
				printf("\nPrime");
				break;
			}
		}
    }
 	return 0;
}

