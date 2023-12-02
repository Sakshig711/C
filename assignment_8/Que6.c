#include<stdio.h>
/*6.Scan 2 integers in main().Define function multiplication() to find their product.
Print result back in main().*/

int multiplication(int x,int y);
int main()
{
	int a,b,ans;
	printf("Enter the integers = ");
	scanf("%d%d",&a,&b);
	
	ans=multiplication(a,b);
	printf("ans=%d",ans);
	return 0;
}
int multiplication(int x,int y) 
{
	int ans;
	ans=x*y;
	return ans;
}
