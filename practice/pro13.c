#include<stdio.h>
void myfun(int a,int b);
int main()
{
	myfun(1,5);

 	return 0;
}
void myfun(int a,int b)
{
	if(a>b)
	{
		return;
	}
	else
	{
		printf("\na=%d",a);
		myfun(a+1,b);
	}
}

