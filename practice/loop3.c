#include<stdio.h>
int yourfun(int num);
int main()
{
	long int num,ans;
	printf("Enter the number = ");
	scanf("%d",&num);
	
	ans=yourfun(num);
	
	while(1<3)
	{
		if(ans>9)
		{
			ans=yourfun(ans);
		}
		else
		{
			break;
		}
	
	}
	printf("sum=%d",ans);
	return 0;
}
int yourfun(int num)
{
	
	int rem,sum;
	sum=0;
	while(num>0)
		{
			
			rem=num%10;
			num=num/10;
			sum=sum+rem;
		}
		return sum;
		
}

