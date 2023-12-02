#include<stdio.h>

int main()
{
	int num[7]={5,23,4,4,5,7,23};
	int i,a,count=0;
	for(i=0; i<=6; i++)
	{
		//printf("\nnum[%d]=%d",i,num[i]);
		if(num[i]==num[i-1])
		{
			printf("%d",num[i]);
		}
	}
	

	
 	return 0;
}

