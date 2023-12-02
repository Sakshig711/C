/*print only even numbers between 1 and 10*/
#include<stdio.h>
void showrec(int x);
int main()
{
	showrec(1);


 	return 0;
}
void showrec(int x)
{
	if (x==11)
	{
		return;
	}
	else 
	{
		if(x%2==0)
		{
			printf("\nx=%d",x);
			showrec(x+1);
		}
		else
		{
			showrec(x+1);
		}
	}
}

