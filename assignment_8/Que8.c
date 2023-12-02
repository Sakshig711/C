#include<stdio.h>
/*8.Scan radius of a circle in main().Define function to find its area and circumference.
Print both results back in main().(functions returning values)*/
float area(int r);
float circumference(int r);
int main()
{
	int rad;
	float ar,circum;
	printf("Enter the radius = ");
	scanf("%d",&rad);
	
	ar=area(rad);
	circum=circumference(rad);	
	
	printf("\narea=%f",ar);
	printf("\nCircumference=%f",circum);
	return 0;
}
float area(int r)
{
	float ar;
	ar=3.14*r*r;
	return ar;
}
float circumference(int r)
{
	float circum;
	circum=2*3.14*r;
	return circum;
}

