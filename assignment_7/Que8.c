#include<stdio.h>
void myfun();
void yourfun();
int main()
{
	myfun();
	myfun();
	return 0;
}
void myfun()
{
	yourfun();
}
void yourfun()
{
	static int x = 5;
	x++;
	printf("\nIn yourfun x = %d",x);
}
