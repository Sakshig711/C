/*Write programs for following questions
1.WAP to check if given number is prime or not.
*/

#include<stdio.h>

int main()
{
	int num,i;
	printf("\nenter the number = ");
	scanf("%d",&num);
	
	for(i=2; i<num-1; i++)
	{
		if (num%i==0)
		{
			printf("\nNot prime");
				break;
		}
		else
		{
			printf("\nPrime");
				break;
		}
	}
	
	return 0;
}

	


 	
