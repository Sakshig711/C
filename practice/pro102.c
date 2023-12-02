#include<stdio.h>

int main()
{
	int sum=0;
	int rem,num;
	
	printf("Enter the number = ");
	scanf("%d",&num);
	int x;
	x=num;
	while(num>0)
	{
		rem=num%10;
		num=num/10;
		sum=(sum*10)+rem;
	}
	
	if(sum==x)
	{
		printf("The number is pallindrome");
	}
	else
	{
		printf("The number is not pallindrome");
	}
	
	


 	return 0;
}

