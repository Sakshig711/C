/*Print first n natural numbers using while loop.*/
#include<stdio.h>

int main()
{
	int i,n;
	printf("Enter the number = ");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		printf("\n %d",i);
		i++;
	}


 	return 0;
}

