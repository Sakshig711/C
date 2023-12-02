#include<stdio.h>
/*1)WAP to explain static variable.*/

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
	static int x=7;
	x++;
	printf("\n\nX=%d",x);
}
