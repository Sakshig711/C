#include<stdio.h>
void myfun();
void yourfun();
int x;
int main()
{
	myfun();
	return 0;
}
void myfun()
{
	yourfun();
	yourfun();
}
void yourfun()
{
	x++;
	printf("\nIn yourfun x = %d",x);
}
