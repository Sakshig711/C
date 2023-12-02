/*+.Scan a number from user.Print correct input if it lies between 10 and 20.*/
#include<stdio.h>

int main()
{
	int num;
	printf("Enter the number = ");
	scanf("%d",&num);
	if(num>=10 && num<=20)
	{
		printf("Correct input");
	}
	else
	{
		printf("Wront input");
	}

 	return 0;
}

