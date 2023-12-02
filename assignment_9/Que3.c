#include<stdio.h>
/*3)Scan 2 integers from user in main().Write a function to find their addition and subtraction.Print results in 
function itself.*/

void addition(int x,int y);
void substraction(int x,int y);
int main()
{
	int a,b;
	printf("\nEnter the 2 integers = ");
	scanf("%d%d",&a,&b);
	
	addition(a,b);
	substraction(a,b);
	
	return 0;
}
void addition(int x,int y)
{
	printf("\naddition=%d",x+y);	
}
void substraction(int x,int y)
{
	printf("\nsubstaction=%d",x-y);
}
