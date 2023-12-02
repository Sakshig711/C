#include<stdio.h>
int multi(int x);
int main()
{
	int ans;
	ans=multi(1);
	printf("\nsum=%d",ans);
 	return 0;
}
int multi(int x)
{
	int res;
	if(x==6)
	{
		return 1;
	}
	else
	{
		res=multi(x+1);
		return res*x;
	}
}

