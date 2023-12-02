/*6.7.WAP to calculate product of digits of a number..*/
#include<stdio.h>

int main()
{
	int num,rem,sum=1;
	puts("Enter the number = ");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		num=num/10;
		sum=sum*rem;
	}
	printf("\nProduct of digits of a number = %d",sum);


 	return 0;
}

