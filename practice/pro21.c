#include<stdio.h>
void myfun();
int main()
{
	myfun();

 	return 0;
}
void myfun()
{
	int n;
	printf("\nEnter the number = ");
	scanf("%d",&n);
	if(n==0)
	{
		return;
	}
	else
	{
		myfun();
	}
}

