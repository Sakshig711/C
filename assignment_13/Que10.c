/*
10.Scan array of 10 integers from user.Define function count to count how many of them are prime and how many of them 
are not prime.*/
#include<stdio.h>

int main()
{
	int num[10];
	int *p;
	p=&num[0];
	int prime=0;
	int non_prime=0;
	int i,j;
	puts("Enter the 10 elements = ");
	for(i=0; i<=9; i++)
	{
		scanf("%d",p+i);
	}
	
	for(i=0; i<=9; i++)
	{
	
		for(j=2; j<= *(p+i)-1; j++)
		{
			
			if(*(p+i)%j==0)
			{	
				non_prime++;
				break;
			}
			else
			{
				prime++;
				break;
			}
		}
	}
	printf("\nPrime=%d  Non prime=%d",prime,non_prime);


 	return 0;
}

