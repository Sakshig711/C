/*array in reverse order*/
#include<stdio.h>

int main()
{
	int num[5];
	int i;
	puts("Enter the integers = ");
	for(i=0; i<=4; i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=4; i>=0; i--)
	{
		printf("num[%d]=%d",i,num[i]);
	}
 	return 0;
}

