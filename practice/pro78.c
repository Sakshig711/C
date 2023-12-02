#include<stdio.h>

int main()
{
	int num[3][4];
	int i,j;
	puts("Enter the array = ");
	for(i=0; i<=2; i++)
	{
		for(j=0; j<=3; j++)
		{
			scanf("%d",&num[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<=2; i++)
	{
		for(j=0; j<=3; j++)
		{
			printf("%d ",num[i][j]);
		}
	//	printf("\n%d",num[i]);
	}
	


 	return 0;
}

