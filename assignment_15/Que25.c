/*9.WAP to find all prime factors of a number.
Input number: 12
Factors of 12: 2, 2, 3, */
#include<stdio.h>

int main()
{
	int i,j,num;
	puts("Enter the number = ");
	scanf("%d",&num);
	for(i=2; i<num; i++)
	{
		if(num%i==0)
		{
			printf(" %d",i);
		}
	}

 	return 0;
}

