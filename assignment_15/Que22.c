/*6.WAP to count number of digits in a number using while loop.*/
#include<stdio.h>

int main()
{
	int num,rem,sum;
	int cnt=0;
	puts("Enter the number = ");
	scanf("%d",&num);
	while(num>0)
	{
		num=num/10;
		cnt++;
	}
	printf("\nNo if digits = %d",cnt);


 	return 0;
}

