#include<stdio.h>
typedef struct number
{
	int km,m;
	
}number;
int main()
{
	number t1,t2;
	number *p,*q;
	p=&t1;
	q=&t2;
	puts("Enter the distance numbers = ");
	scanf("%d%d",&(p->km),&(p->m));
	scanf("%d%d",&(q->km),&(q->m));

	printf("1st distance = %d",(p->km)*1000+(p->m));
	printf("\n2nd distance = %d",(q->km)*1000+(q->m));

 	return 0;
}

