#include<stdio.h>
int myfun(int x);
int main()
{
	int ans;
	ans=myfun(6);
	printf("ans=%d",ans);
 	return 0;
}
int myfun(int x)
{
	if(x==0)
	{
		return 0;
	}
	else
	{
		int res;
		res=myfun(x-1);
		return res+x;
	}
}

