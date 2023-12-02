/*6)Scan a number from user.Check if it is prime or not.*/
#include<stdio.h>

int main()
{
	int i,num;
	printf("\nEnter the number = ");
	scanf("%d",&num);
	for(i=2; i<=num-1; i++)
	{
		if(num%i==0)
		{
			break;
		}
		
	}
	if(i==num)
	{
		printf("prime");
	}
	else
	{
		printf("\nNot prime");
	}
 	return 0;
}

