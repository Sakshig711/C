#include<stdio.h>
/*6)Keep scanning a number from user until user enters 0.Define function evenodd() 
to check if entered number is even or odd.(Here you have to call your function evenodd() 
everytime you scan a number from user)*/
void evenodd(int i);
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
			evenodd(num);	
		}
		
	}
	

	return 0;
}
void evenodd(int i)
{
	if(i%2==0)
	{
		printf("Even\n");
	}
	else
	{
		printf("odd\n");
	}
}
