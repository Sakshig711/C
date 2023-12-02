#include<stdio.h>
void myfun(int x);
int main()
{
	myfun(30);
 	return 0;
}
void myfun(int x)
{
	if(x==9)
	{
		return;
	}
	else
	{
		myfun(x-1);
		printf("\nx=%d",x);
	}
}

