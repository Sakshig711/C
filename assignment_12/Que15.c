/*
Q15.Scan a range from user.Print all integers in the range using recursive function.*/
#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter the range = ");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		myfun(a,b);
	}
	else
	{
		myfun(b,a);
	}
	


 	return 0;
}
int myfun(int x,int y)
{
	if(x<y)
	{
		return;
	}
	else
	{
		myfun(x-1,y);
		printf("\n%d",x);
		
	}
}

