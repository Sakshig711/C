/*Print addition of 1 to 5 using loop.*/
#include<stdio.h>

int main()
{
	int i=1,sum=0;
	while(i<=5)
	{
		sum=sum+i;
		i++;
	}
	printf("\nsum=%d",sum);


 	return 0;
}

