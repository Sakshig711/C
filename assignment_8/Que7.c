/*7.Scan length and width of a rectangle.Define function area to find area of rectangle.
Print result back in main().*/

#include<stdio.h>
int area(int a,int b);
int main()
{
	int len,wid,ans;
	printf("Enter the length = ");
	scanf("%d",&len);
	printf("Enter the width = ");
	scanf("%d",&wid);
	
	ans=area(len,wid);
	printf("Area= %d",ans);
	return 0;
}
int area(int a,int b)
{
	return a*b;
}

