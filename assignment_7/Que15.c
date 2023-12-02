#include<stdio.h>

void myfun();
void yourfun();
int g = 2;
int main()
{
	myfun();
	printf("\nIn main() g = %d",g);
	return 0;
}
void myfun()
{
	yourfun();
	yourfun();
}
void yourfun()
{
	g++;
}
