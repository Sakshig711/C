/*print 5 to 1*/
#include<stdio.h>
void showrec(int x);
int main()
{
	showrec(1);

 	return 0;
}
void showrec(int x)
{
	if(x==6)
	{
		return;
	}
	else
	{
		showrec(x+1);
		printf("\nx=%d",x);
	}
}

