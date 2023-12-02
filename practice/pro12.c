#include<stdio.h>
void myfun(int x);
int main()
{
	myfun(1);

 	return 0;
}
void myfun(int x)
{
	if(x==5)
	{
		return;
	}
	else
	{
		printf("\nBefore x=%d",x);
		myfun(x+1);
		printf("\nafter x=%d",x);
	}
}

