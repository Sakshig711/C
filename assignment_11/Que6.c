/*6.Scan length and width of rectangle in main().Define function rectagle to find area and perimeter of a rectangle.
Print both results in main().
*/
#include<stdio.h>
int area(int x,int y);
int peri(int x,int y);
int main()
{
	int len,wid,ans1,ans2;
	printf("\nEnter the length = ");
	scanf("%d",&len);
	printf("\nEnter the width = ");
	scanf("%d",&wid);
	
	ans1=area(len,wid);
	ans2=peri(len,wid);
	printf("area=%d  perimeter=%d",ans1,ans2);
 	return 0;
}
int area(int x,int y)
{
	return x*y;
}
int peri(int x,int y)
{
	return 2*(x+y);
}

