#include<stdio.h>

int main()
{
	int num[5]={5,7,3,5,5};
	int i,count=0;
	for(i=0; i<=4; i++)
	{
		if(num[i]%5==0)
		{
			count=count+1;
			
		}
		
	}
	printf("\n%d",count);


 	return 0;
}

