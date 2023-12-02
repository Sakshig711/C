/*9)Scan length and width of a rectangle.Find area and perimeter in a function rectangle().
Print both results in main().*/

#include<stdio.h>
void reactangle(int l,int w,int *parea,int *pperi);
int main()
{
	int len,wid,area,peri;
	puts("Enter the length = ");
	scanf("%d",&len);
	puts("Enter the width = ");
	scanf("%d",&wid);
	
	reactangle(len,wid,&area,&peri);
	printf("\nArea=%d  Perimeter=%d",area,peri);


 	return 0;
}
void reactangle(int l,int w,int *parea,int *pperi)
{
	*parea=l*w;
	*pperi=2*(l+w);
}

