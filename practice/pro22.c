/*print addition of 1 to 5*/
#include<stdio.h>
int myfun(int x);
int main()
{
	int ans;
	ans=myfun(1);
	printf("\nsum=%d",ans);

 	return 0;
}
int myfun(int x)
{
	int res,ans;
	if(x==6)
	{
		return 0;
	}
	else
	{
		
		res=myfun(x+1);
		return x+res;
	}
}

