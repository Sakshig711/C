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
	int x = 5;
	x++;
	yourfun();
	printf("\nIn myfun() x = %d",x);
}
void yourfun()
{
	printf("\nIn yourfun");
}
