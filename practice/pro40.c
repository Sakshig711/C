#include<stdio.h>

int main()
{
	int source[5]={34,69,6,4,7};
	int res[5];
	int i;
	for(i=0; i<=4; i++)
	{
		 res[i]=  source[i];
	}
	for(i=0; i<=4; i++)
	{
		printf("\nres[%d] = %d ",i,res[i]);
	}
	

 	return 0;
}

