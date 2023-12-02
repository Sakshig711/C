#include<stdio.h>

int myfun();
int main()
{
	int a;
	a = myfun();
	printf("\na = %d",a);
}
int myfun()
{
	return 2+5;
}
