/*Find n! using while loop.*/
#include<stdio.h>

int main()
{
	int n,i,fact=1;
	printf("Enter the value of n = ");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("\nfactorial=%d",fact);


 	return 0;
}

