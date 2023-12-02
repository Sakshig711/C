#include<stdio.h>
typedef struct number
{
	int x,y;
	
}number;
int main()
{
	number t1={3,7};
	number t2={3,7};
	number *p,*q;
	p=&t1;
	q=&t2;
	printf("\n%d",(*p).x);
	printf("\n%d",(*p).y);
	printf("\n%d",(*q).x);
	printf("\n%d",(*q).y);
 	return 0;
}

