#include<stdio.h>

#include<stdio.h>

void myfun();
int x = 10;
int y = 5;
int main()
{
	int x = 15;
	myfun();
	x = 20;
	myfun();
	return 0;
}
void myfun()
{
	
	x++;
	y++;
	printf("\nx = %d y = %d",x,y);
}
