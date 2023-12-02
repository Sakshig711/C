/*10.WAP to print all prime numbers between 1 and n.
n is the input from user.*/
#include<stdio.h>

int main()
{
	int n,i,j;
	puts("Enter the number = ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		for(j=2; j<i; j++)
		{
			if(i%j==0)
			{
				break;
			}
			
		}
		if(j==i)
		{
			printf("\n%d",i);
		}
		
	}


 	return 0;
}

