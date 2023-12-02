#include<stdio.h>

void myfun();
int main()
{
	myfun(1);
	return 0;
}

void myfun(int x)
{
	
	x++;
	printf("x = %d",x);
}
