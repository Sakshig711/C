/*11.Scan array of 5 integers from user.Define function primefactor() to print prime factors of each element of array.
*/
#include<stdio.h>
void primefactor();
int main()
{
	int arr[5];
	int *p=&arr[0];
	int i;
	puts("Enter the 5 elements = ");
	for(i=0; i<=4; i++)
	{
		scanf("%d",p+i);
	}
	primefactor(p);
 	return 0;
}
void primefactor(int *p)
{
	int i,j;
	
	for(j=0; j<=4; j++)
	{
		for(i=2; i<=*(p+j); i++)
		{
			while(*(p+j)%i==0)
			{
				printf("%d ",i);
				*(p+j)=*(p+j)/i;
			}
			
		}
		printf("\n");
	}
}

