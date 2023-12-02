#include<stdio.h>

int main()
{
	int num[2][3];
	int i,j;
	int *p=&num[0][0];
	puts("Enter the array = ");
	for(i=0; i<=2*3; i++)
	{
		scanf("%d",p+i);
	}
	for(i=0; i<=2*3; i++)
	{
		printf("%d ",*(p+i));
	}

 	return 0;
}

