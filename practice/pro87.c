#include<stdio.h>
typedef struct number
{
	int num[5];
	
}number;
int main()
{
	number t1,t2;
	int i;
	puts("Enter t1 array = ");
	for(i=0; i<5; i++)
	{
		scanf("%d",&t1.num[i]);
	}
	puts("Enter t2 array = ");
	for(i=0; i<5; i++)
	{
		scanf("%d",&t2.num[i]);
	}
	for(i=0; i<5; i++)
	{
		printf("%d ",t1.num[i]);
	}

	printf("\n");
	for(i=0; i<5; i++)
	{
		printf("%d ",t2.num[i]);
	}

 	return 0;
}

