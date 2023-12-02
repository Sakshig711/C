#include<stdio.h>


int main()
{
	int x=10;
	
	int *p;
	p=&x;
	
	int **q;
	q=&p;
	
	int ***r;
	r=&q;
	
	printf("\nx=%d",x);
	printf("\np=%u",p);
	printf("\nq=%u ",q);
	printf("\nr=%u",r);
	
	printf("\n   x=%d ",*p);
	printf("\n   p=%u ",*q);
	printf("\n   q=%u ",r);
	
	return 0;
}
