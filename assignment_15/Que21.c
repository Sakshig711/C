/*5.WAP to find sum of all odd numbers between 1 to n using while loop.
*/
#include<stdio.h>

int main()
{
	int n,i=0,sum=0;
	puts("Enter till which no u want sum = ");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("%d",sum);


 	return 0;
}

