#include<stdio.h>
/*4)Scan radius of a circle in main().Define function circle() to find area and circumference of circle.
Print results in function itself.*/
void circle(int rad);
int main()
{
	int r;
	printf("\nEnter the radius = ");
	scanf("%d",&r);
	
	circle(r);
	
	return 0;
}
void circle(int rad)
{
	printf("\nArea=%f",3.14*rad*rad);
	printf("\ncircumference=%f",2*3.14*rad);
}
