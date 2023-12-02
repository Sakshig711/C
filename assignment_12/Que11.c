/*Q11.Scan length and width of rectangle from user in main().
Define function rectangle() to find area and perimeter of rectangle.
Print both results back in main().(Not an array question)
*/
#include<stdio.h>
void reactangle(int a,int b,int *parea,int *pperi);
int main()
{
	int len,wid,area,peri;
	printf("Enter the length ans width = ");
	scanf("%d%d",&len,&wid);
	reactangle(len,wid,&area,&peri);
	printf("\nArea=%d   Perimeter=%d",area,peri);
	
 	return 0;
}
void reactangle(int a,int b,int *parea,int *pperi)
{
	*parea=a*b;
	*pperi=2*(a+b);
}
