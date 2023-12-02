/*Q1.Scan an array of 8 integers from user.Print this array in reverse order.
[] notation
*/
#include<stdio.h>

int main()
{
	int i,num[8];
	printf("\nEnter the 8 integers = ");
	for(i=0; i<=7; i++)
	{
		
		scanf("%d",&num[i]);
	}
	for(i=7; i>=0; i--)
	{
		printf("\nnum[%d]=%d",i,num[i]);
	}

 	return 0;
}
 
