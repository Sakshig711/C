#include<stdio.h>
void myfun(int  *m , int *n );
void yourfun(int **p,int **q);
int main()
{
	int a = 10,b = 15;
	printf(" before%d-%d",a,b);  //10 , 15
	myfun(&a,&b);
	printf("\n\n after%d-%d",a,b);  // 12 , 19
 	return 0;
}
void myfun(int  *m , int *n )
{
	yourfun(&m,&n);
}
void yourfun(int **p,int **q)
{
	**p=12 ;
	**q=19;
}


