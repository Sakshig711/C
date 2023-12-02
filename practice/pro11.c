#include<stdio.h>
void myfun(int x);
int main()
{
	myfun(5);
	
 	return 0;
}
void myfun(int x)
{
	if(x>=1)
	{
		printf("\nbefore x=%d",x);
		myfun(x-1);
		printf("\nafter x=%d",x);
	}
}

