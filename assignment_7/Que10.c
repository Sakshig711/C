#include<stdio.h>
void myfun();
void yourfun(int y);

int main()
{
	myfun();
	myfun();
	return 0;
}

void myfun()
{
	static int x = 5;
	x++;
	yourfun(x);
}

void yourfun(int y)
{
	y++;
	printf("\ny = %d",y);
}
