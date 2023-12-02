#include<stdio.h>
void myfun(int *px);
int main()
{
	int x=10;
	printf("\nBefore X = %d",x);
	
	myfun(&x);
	printf("\nafter X = %d",x);
 	return 0;
}
void myfun(int *px)
{
	*px=15;
}
