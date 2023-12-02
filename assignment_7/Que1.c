#include<stdio.h>
void myfun();
int x = 10;
int main()
{
	int x = 5;
	
	myfun();
	
	printf("in main x = %d",x);

	return 0;
}
void myfun()
{
	x = x + 8 ;
}
	
	

