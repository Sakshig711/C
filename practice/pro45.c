/*print addition of only even numbers*/
#include<stdio.h>
int add(int x,int y);
int main()
{
	int a,b,ans;
	printf("Enter the numbers = ");
	scanf("%d%d",&a,&b);
	
	if(a>b)
	{
		ans=myfun(b,a);
		printf("\nans=%d",ans);
	}
	else
	{
		ans=myfun(a,b);
		printf("\nans=%d",ans);
	}
	

 	return 0;
}
int myfun(int x,int y)
{
	int res;
	if(x>y)
	{
		return 0;
	}
	else
	{
		res=myfun(x+1,y);
		if(x%2==0)
		{
			return res+x;	
		}
		else
		{
			return res;
		}
		
	}
	
	
}

