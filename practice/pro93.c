#include<stdio.h>
typedef struct number
{
	int x,y;
	
}number;
int main()
{
	number t1,t2;
	number *p,*q;
	p=&t1;
	q=&t2;
	puts("Enter the 4 numbers = ");
	scanf("%d%d",&(p->x),&(p->y));
	scanf("%d%d",&(q->x),&(q->y));

	printf("%d %d",(p->x),(p->y));
	printf("\n%d %d",(q->x),(q->y));

 	return 0;
}

