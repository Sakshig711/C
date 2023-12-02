
#include<stdio.h>

int main()
{
	int num,rem;
	printf("Enter the 4 digit number = ");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		num=num/10;
		printf("\n%d",rem);
	}


 	return 0;
}

