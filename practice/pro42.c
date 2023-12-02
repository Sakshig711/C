#include<stdio.h>

int main()
{
	int num[5]={3,5,8,5,3};
	int i;
	for(i=0; i<=4; i++)
	{
		if(num[i]%2==0)
		{
			printf("\nnum[%d] = %d ",i,num[i]);
		}
	}

 	return 0;
}

