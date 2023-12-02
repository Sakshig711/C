/*5)Scan a number from user.Print addition of all digits in given number.*/
#include<stdio.h>

int main()
{
	int num,rem;
	int sum=0;
	printf("\nEnter the number = ");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		num=num/10;
		sum=sum+rem;
	}
	printf("sum=%d",sum);
	
 	return 0;
}

