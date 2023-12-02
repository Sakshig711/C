#include<stdio.h>

int main()
{
	long int num;
	int rem,sum;
	sum=0;
	printf("Enter the number = ");
	scanf("%d",&num);
	do
	{
		while(num>0)
		{
			
			rem=num%10;
			num=num/10;
			sum=sum+rem;
		}
		printf("\nsum=%d",sum);
		if(num==0)
		{
			num=sum;
				if(sum>=10)
				{
					sum=0;
				}
			
		}
			
	}while(sum>9);


 	return 0;
}

