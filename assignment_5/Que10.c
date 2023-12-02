
/*
ABCDE
BCDEF
CDEFG*/
#include<stdio.h>

int main()
{
	int i,j,k;
	for(i='A'; i<='C'; i++)
	{
		for(j=i; j<=i+4; j++)
		{
			printf("%c",j);
		}
		printf("\n");
				
	}


 	return 0;
}

