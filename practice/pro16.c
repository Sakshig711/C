#include<stdio.h>
void showrec(int x);
int main()
{
	showrec(10);

 	return 0;
}
void showrec(int x)
{
	if(x==0)
	{
		return;
	}
	else
	{
		showrec(x-1);
		printf("\nx=%d",x);
	}
}

