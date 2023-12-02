#include<stdio.h>

int main()
{
	int ans;
	ans=myfun(1);
	printf("ans=%d",ans);
 	return 0;
}
int myfun(int x)
{
	if(x==6)
	{
		return 0;
	}
	else
	{
		int res;
		res=myfun(x+1);
		return res+x;
	}
}

