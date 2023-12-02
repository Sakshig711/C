#include<stdio.h>
void myfun(int x,int y);
int main()
{
	int a,b;
	printf("Enter the range = ");
	scanf("%d%d",&a,&b);
	
	if(a>b)
	{
		myfun(b,a);
	}
	else
	{
		myfun(a,b);
	}

 	return 0;
}
void myfun(int x,int y)
{
	if(x>y)
	{
		return;
	}
	else
	{
		printf("\nx=%d",x);
		myfun(x+1,y);
	}
}

