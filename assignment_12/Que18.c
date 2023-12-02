/*Q18.WAP to check if given number is pallindrome or not.*/
#include<stdio.h>

int main()
{
	int num,sum=0,rem,x;
	puts("Enter the number = ");
	scanf("%d",&num);
	x=num;
	while(num>0)
	{
		rem=num%10;
		num=num/10;
		sum=10*sum+rem;
		
	}
	if(sum==x)
	{
		printf("It is pallindrome");
	}
	else
	{
		printf("It is Not pallindrome");
	}
	

 	return 0;
}

