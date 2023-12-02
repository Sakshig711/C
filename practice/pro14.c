/*print 1 to 5*/
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
		printf("\nx=%d",x);
		showrec(x+1);
	}	
}

