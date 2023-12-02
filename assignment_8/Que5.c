/*5.Scan a radius from user.Define functions area() and circumference() to find area() 
and circumference() of circle.Print each result in fuction itself.
*/

#include<stdio.h>
void area(int r);
void circumference(int r);
int main()
{
	int rad;
	printf("Enter the radius = ");
	scanf("%d",&rad);
	
	area(rad);
	circumference(rad);	
	
	
	return 0;
}
void area(int r)
{
	float ar;
	ar=3.14*r*r;
	printf("\narea=%f",ar);
}
void circumference(int r)
{
	float circum;
	circum=2*3.14*r;
	printf("\nCircumference=%f",circum);
}
