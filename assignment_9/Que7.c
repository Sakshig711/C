#include<stdio.h>

int validnumber(int i);
int main()
{
	int  number;
	printf("\nEnter a number");
	scanf("%d",&number);

	if( validNumber(number) )   
	{
		printf("Number is greater than 0");
	}
	else
	{
		printf("Number is less than 0");
	}

 	return 0;
}
int validnumber(int i)
{
	if(i>0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
