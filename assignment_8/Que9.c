/*9.Scan length and width of a rectangle.Define function area() and perimeter() to 
find area and perimeter of a rectangle.Print results back in main().*/
#include<stdio.h>

int perimeter(int a,int b);
int area(int a,int b);

int main()
{
	int len,wid,ar,peri;
	
	printf("Enter the length = ");
	scanf("%d",&len);
	printf("Enter the width = ");
	scanf("%d",&wid);
	
	ar=area(len,wid);
	peri=perimeter(len,wid);
	
	printf("\nArea= %d",ar);
	printf("\nperimeter= %d",peri);
	return 0;
}
int area(int a,int b)
{
	return a*b;
}
int perimeter(int a,int b)
{
	return 2*(a+b);
}	
	

