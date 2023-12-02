/*2.Scan 6 integers from user and check if they are prime or not.*/
#include<stdio.h>

int main()
{
	int i,num;
	
	for(i=1; i<=6; i++)
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

