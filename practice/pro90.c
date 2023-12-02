#include<stdio.h>
typedef struct array
{
	int num[5];
	
}array;
int main()
{
	array obj[4];
	int i,j;
	puts("Enter the array = ");
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			scanf("%d",&obj[i].num[j]);
		}
	}
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			printf(" %d",obj[i].num[j]);
		}
	}

 	return 0;
}

