/*1)Scan 2 numbers from user.Find their LCM and GCD.*/

#include<stdio.h>

int main()
{
	int min,max,num1,num2,i;
	printf("\nenter the value = ");
	scanf("%d%d",&num1,&num2);
	
	min=(num1>num2)?num2:num1;
	max=(num1>num2)?num1:num2;
	
	for(i=max; i<=num1*num2; i++)
	{
		if(i%num1==0 && i%num2==0)
		{
			printf("\nLCM=%d",i);
		}
	}
	
		for(i=min; i>=1; i--)
		{
			if(num1==0 && num2==0)
			{
				printf("\nGCD=%d",i);
			}
			break;
		}
 	return 0;
}

