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
	int x = 5;
	int y = 10;
	x++;
	y++;
	printf("\nx = %d y = %d",x,y);
}
