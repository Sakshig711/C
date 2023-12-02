#include<stdio.h>

void myfun();
int x = 10;
int main()
{
	
	myfun();
	myfun();
		
	printf("in main x = %d",x);

	return 0;
}
void myfun()
{
	int x = 6;
	x = x + 3 ;
}
	


