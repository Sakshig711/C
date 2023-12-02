/*Q14.Find n! using recursive functions.*/
#include<stdio.h>

int main()
{
	int n,ans;
	printf("\nEnter the given number = ");
	scanf("%d",&n);
	ans=fact(n);
	printf("\nFactorial=%d",ans);
 	return 0;
}
int fact(int x)
{
	int res;
	if(x==0)
	{
		return 1;
	}
	else
	{
		res=fact(x-1);
		return res*x;
	}
}

