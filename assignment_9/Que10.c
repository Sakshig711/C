/*10)Keep scanning numbers from user until user enters 0.These numbers could be positive or negative.
Stop canning numbers from user when user enters 0 and print count of positive and negative numbers user entered.*/

#include<stdio.h>
void myfun(int i);
int main()
{
	int num;
	
	while(1)
	{
		printf("Enter the value = ");
		scanf("%d",&num);
		
		if(num==0)
		{
			break;
		}
		else
		{
			myfun(num);	
		}
		
	}
	

	return 0;
}
void myfun(int i)
{
	if(i<0)
	{
		printf("Negative\n");
	}
	else
	{
		printf("Positive\n");
	}
}

 

