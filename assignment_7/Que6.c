#include<stdio.h>
void myfun();
int main()
{
	myfun();
	myfun();
	myfun();
	return 0;
}
void myfun()
{
	static int y = 10;
	y = 6;
	y++;
	printf("\ny = %d",y);
}

