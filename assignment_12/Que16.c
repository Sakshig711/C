/*Q16.Scan a range from user.Print addition of only even numbers in the range using recursive add()
function.*/
#include<stdio.h>

int main()
{
	int a,b,ans;
	printf("Enter the range = ");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		ans=myfun(b,a);
	}
	else
	{
		ans=myfun(a,b);
	}
	printf("\naddition = %d",ans);
	
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




