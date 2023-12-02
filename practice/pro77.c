#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;
	p=(int*)malloc(2*sizeof(int));
	scanf("%d%d",p,p);
	printf("%d",*p+*p);
	


 	return 0;
}

