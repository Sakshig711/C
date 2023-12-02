/*functions returning addresses*/
#include<stdio.h>
int * myfun();
int main()
{
	int *p;
	p=myfun();
	printf("%d",*p);
	

 	return 0;
}
int * myfun()
{
	int a=10;
	return &a;
}

