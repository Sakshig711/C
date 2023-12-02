#include<stdio.h>

int main()
{
	int ans,n;
	printf("\nEnter the number = ");
	scanf("%d",&n);
	ans=myfun(n);
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
