#include<stdio.h>
/*2)WAP to explain global variables*/
void myfun();
int x=11;

int main()
{
	printf("\n\nX=%d",x);
	
	myfun();

	return 0;
}
void myfun()
{
	x=x+7;
	printf("\n\nX=%d",x);
}
