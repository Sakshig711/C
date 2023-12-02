/*11)Scan length and width of rectangle from user in main().Define functions to find its area and perimeter.Print both results back in main().
*/

#include<stdio.h>
int area (int len,int wid);
int perimeter(int len,int wid);

int main()
{
	int len,wid,ans1,ans2;
	
	printf("\nEnter the length = ");
	scanf("%d",&len);

	printf("\nEnter the width = ");
	scanf("%d",&wid);
	
	ans1=area(len,wid);
	ans2=perimeter(len,wid);
	
	printf("\nArea = %d",ans1);
	printf("\nPerimeter = %d",ans2);
	
 	return 0;
}
int area (int len,int wid)
{
	return len*wid;
}
int perimeter(int len,int wid)
{
	return 2*(len+wid);
}

