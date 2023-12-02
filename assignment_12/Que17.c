/*Q17.Scan 5 integers from user and count number of prime and composite integers.*/
#include<stdio.h>

int main()
{
	int num;
	int i,n=0,p=0,j,x;
	puts("Enter the 5 integers = ");
	for(i=0; i<=4; i++)
	{
		scanf("%d",&num);
		
		for(j=2; j<=num-1; j++)
		{
			if(num%j==0)
			{
				n++;
				break;
			}
			else
			{
				p++;
				break;
			}	
		}
	}
	printf("\nPrime=%d	composite=%d",p,n);
		return 0;
}

