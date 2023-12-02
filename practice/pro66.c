#include<stdio.h>

int main()
{
	int num[4]={7,2,4,9};
	int i,j;
	int temp;
	for(i=0; i<=3; i++)
	{
		for(j=i+1; j<=3; j++)
		{
			if(num[i]>num[j])
			{
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}
	for(i=0; i<=3; i++)
	{
		printf("\nnum[%d]=%d",i,num[i]);
	}


 	return 0;
}

