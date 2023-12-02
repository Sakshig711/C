/*7)Scan a number from user.Check if it is pallindrome or not.*/
#include<stdio.h>

int main()
{
	int num,rem,sum,x;
	printf("\nEnter the number = ");
	scanf("%d",&num);
	sum=0;
	x=num;
	while(num>0)
	{
		rem=num%10;
		num=num/10;
		sum=rem+sum*10;
	}
	if(x==sum)
	{		
		printf("It is pallindrome");
	}
	else
	{
		printf("it is not pallindrome");
	}
	

 	return 0;
}

