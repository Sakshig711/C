/*1.Scan 2 integers from user in main().Define function addition() to add these integers.
Print result in addition function itself.
*/
#include<stdio.h>

void addition(int a,int b);
int main()
{
	int x,y;
	printf("\nEnter two integers = ");
	scanf("%d%d",&x,&y);
	
	addition(x,y);
	
	return 0;
}
void addition(int a,int b)
{
	int ans;
	ans=a*b;
	printf("Ans=%d",ans);
}
