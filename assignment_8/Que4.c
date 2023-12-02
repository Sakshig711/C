#include<stdio.h>
/*4.Scan 2 integers in main().Perform their addition in add() function.
Perform their subtraction in sub() function.Print both results back in main().
Do not use parameter passing.(global)*/

int add(int a,int b);
int sub(int a,int b);
int main()
{
	int a,b,addition,substraction;
	printf("Enter the 2 value = ");
	scanf("%d%d",&a,&b);
	
	addition=add(a,b);
	substraction=sub(a,b);
	printf("\nAddition= %d",addition);
	printf("\nSubstraction= %d",substraction);
	
	return 0;
}
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
