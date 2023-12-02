/*
01234
12345
23456
34567*/
#include<stdio.h>

int main()
{
	int i,j,k;
	for(i=0; i<4; i++)
	{
		for(j=i; j<=i+4; j++)
		{
			printf("%d",j);
		}
		printf("\n");
				
	}


 	return 0;
}

