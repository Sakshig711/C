/*
AAAAA
*****
BBBBB
*****
CCCCC
******/
#include<stdio.h>

int main()
{
	int i,j,k;
	for(i='A'; i<='C'; i++)
	{
		for(j=i; j<=i+4; j++)
		{
			printf("%c",i);
			
		}
		printf("\n");
		for(k=1; k<=5; k++)
		{
			printf("*");
		}
		printf("\n");
		
	}


 	return 0;
}

