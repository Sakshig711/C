/*array of oject*/
#include<stdio.h>
typedef struct array
{
	int x,y;
	
}array;
int main()
{
	array num[4];
	int i;
	puts("Enter the array = ");
	for(i=0; i<4; i++)
	{
		scanf("%d%d",&num[i].x,&num[i].y);
	}
	for(i=0; i<4; i++)
	{
		printf(" %d",num[i].x);
		printf(" %d",num[i].y);
	}

 	return 0;
}

