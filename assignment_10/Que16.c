/*8)Scan radius from user in main().Define function circle() to find area and circmference
of a circle.Print both results in main().*/

#include<stdio.h>
void circle(int r,int *parea,int *pcircum);
int main()
{
	int rad;
	int area,circum;
	puts("Enter the radius = ");
	scanf("%d",&rad);
	circle(rad,&area,&circum);
	printf("\narea=%d  circumference=%d",area,circum);

 	return 0;
}
void circle(int r,int *parea,int *pcircum)
{
	*parea=3.14*r*r;
	*pcircum=2*3.14*r;
}

