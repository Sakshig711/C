/*Element with addreses*/
#include<stdio.h>

int main()
{
	int num[8];
	int i;
	puts("Enter the numbers = ");
	for(i=0; i<=7;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0; i<=7;i++)
	{
		printf("\n  num[%d]=%d  address=%u",i,num[i],&num[i]);
	}
 	return 0;
}

