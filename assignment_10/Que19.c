#include<stdio.h>
int isprime(int a);
int main()
{
	int num;
	printf("\nEnter number to check if it is prime or not = ");
	scanf("%d",&num);
	if( isprime(num) == 1 )
	{
		printf("\nGiven number is prime");
	}
	else
	{
		printf("\nGiven number is not prime");
	}


 	return 0;
}
int isprime(int a)
{
	int i;
	for(i=2; i<=a-1; i++)
	{
		if(a%i==0)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
}
