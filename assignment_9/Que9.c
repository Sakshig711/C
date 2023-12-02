/*
9)Scan 2 integers from user.Write a function lcmgcd() to find their lcm and gcd.Print both results in function itself.*/

#include<stdio.h>

int main()
{
	int min,max,num1,num2,i;
	printf("\nEnter two integers = ");
	scanf("%d%d",&num1,&num2);
	min=(num1>num2)?num2:num1;
	max=(num1>num2)?num1:num2;
	
	for (i=max; i<=num1*num2; i++)
	{
		if(i%num1==0 && i%num2==0)
		{
			printf("\nLCM=%d",i);
		}
	}
		for(i=min; i>=1; i--)
		{
			if(i%num1==0 && i%num2==0)
			{
				printf("\nGCD=%d",i);
			}
			break;
		}

 	return 0;
}

