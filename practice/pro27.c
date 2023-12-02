#include<stdio.h>
int myfun();
int main()
{
	int ans;
	ans=myfun();

 	return 0;
}
int myfun()
{
	int n,res;
	printf("\nEnter the number = ");
	scanf("%d",&n);
	if(n==0)
	{
		return 0;
	}
	else
	{
		if(n%2==0)
		{
			printf("\nx=%d",n);
			myfun();
		}
		else
		{
			res=myfun();
			return res+n;
		}
	}
}

