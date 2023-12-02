#include<stdio.h>
int getdata();
int add(int a,int b);
int main()
{
	int  num1 , num2 ;
	int res;
	
	num1 = getdata();
	num2 = getdata();
	
	res = add(num1,num2);
	printf("\nAddition is %d",res);


 	return 0;
}
int getdata()
{
	int n;
	printf("\nEnter the integer = ");
	scanf("%d",n);
	return n;
}
int add(int a,int b)
{
	return a+b;
}

