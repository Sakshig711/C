#include<stdio.h>
typedef struct array
{
	int num[5];
	
}array;
int main()
{
	array obj[4];
	int i,j;
	
	for(i=0; i<3; i++)
	{
		puts("\nEnter the array = ");
		int sum=0;
		for(j=0; j<4; j++)
		{
			scanf("%d",&obj[i].num[j]);
			sum=sum+obj[i].num[j];
		}
		printf("sum=%d",sum);
	}
		
	return 0;
}
