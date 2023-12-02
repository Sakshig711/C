/*5.WAP to find prime factors of given number.
*/
#include<stdio.h>

int main()
{
	int i,num;
	printf("\nEnter the number = ");
	scanf("%d",&num);
	for(i=2; i<=num; i++)
	{
		while(num%i==0)
		{
			printf("%d ",i);
			num=num/i;
		}
		
	}
	

 	return 0;
}

