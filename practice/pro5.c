#include<stdio.h>


int main()
{
	int a,b,*pa,*pb,**ppa,**ppb;
	
	pa=&a;
	pb=&b;
	
	ppa=&pa;
	ppb=&pb;
	
	printf("\n\nEnter the value for a = ");
	scanf("%d",pa);
	printf("\na=%d",a);	
	
	printf("\n\nEnter the value for b = ");
	scanf("%d",pb);
	printf("\nab=%d",b);
	
	printf("\n\nEnter the value for a = ");
	scanf("%d",*ppa);
	printf("\na=%d",a);
	
	printf("\n\nEnter the value for a = ");
	scanf("%d",*ppb);
	printf("\nb=%d",b);	
	
	return 0;
}
