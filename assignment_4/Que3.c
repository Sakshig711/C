/*Print only even integers between 0 and 21.*/
#include<stdio.h>

int main()
{
	int i;
	for(i=1; i<=21; i++)
	{
		if(i%2==0)
		{
			printf("\n%d",i);
		}
	}

 	return 0;
}

