/*Scan 2 numbers from user.Then ask user to enter numbers between 1 to 4.
If user enters 1,print addition of given 2 numbers.
If user enters 2,print subtraction of given 2 numbers.
If user enters 3,print division of given 2 numbers.
If user enters 4,print multiplication of given 2 numbers.
*/
#include<stdio.h>

int main()
{
	int a,b,ch;
	printf("Enter the given numbers = ");
	scanf("%d%d",&a,&b);
	
	puts("\n\nEnter 1 for addition\nEnter 2 for subtraction\nEnter 3 for multiplication\nEnter 4 for division");
	scanf("%d",&ch);
	if(ch==1)
	{
		printf("Adition=%d",a+b);
	}
	else if(ch==2)
	{
		printf("subtraction=%d",a-b);
	}
	else if(ch==3)
	{
		printf("multiplication=%d",a*b);
	}
	else if(ch==4)
	{
		printf("Divition=%f",a/b);
	}
	else
	{
		printf("Wrong input");
	}
 	return 0;
}

