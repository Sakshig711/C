#include<stdio.h>

int main()
{
	int num[5];
	int i;
	puts("Enter the integer = ");
	for(i=0; i<=4; i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0; i<=4; i++)
	{
		printf("\n  num[%d]=%d",i,num[i]);
	}
	
 	return 0;
}

