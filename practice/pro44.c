#include<stdio.h>

int main()
{
	int num[5]={8,7,3,3,6};
	int i,count=0;
	for(i=0; i<=4; i++)
	{
		if(num[i]%5==0)
		{
			count=count+1;
			
		}
		
	}
	if(count==0)
	{
		printf("Not present");
	}
	else
	{
		printf(" present");
		
	}


 	return 0;
}

