#include<stdio.h>

int main()
{	
	float num[8];
	int i;
	puts("Enter the fraction values = ");
	for(i=0; i<=7;i++)
	{
		scanf("%f",&num[i]);
	}
	for(i=0; i<=7;i++)
	{
		printf("\n\nnum[%d]=%f",i,num[i]);
	}
	
	


 	return 0;
}

