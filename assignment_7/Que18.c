#include<stdio.h>

int myfun();
int yourfun();
int main()
{
	int a;
	a = myfun();
	printf("\na = %d",a);
}
int myfun()
{
	int b;
	b = yourfun();
	return b;
}
int yourfun()
{
	return 10;
}
