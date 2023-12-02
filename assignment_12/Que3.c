/*Q3.Scan 6 integers from user in an array.Copy this array in another array in reverse order.
[] notation*/
#include<stdio.h>

int main()
{
	int source[6];
	int target[6];
	int i;
	puts("Enter 6 integers = ");
	for(i=0; i<=5; i++)
	{
		scanf("%d",&source[i]);
		target[5-i]=source[i];
	}
	for(i=0; i<=5; i++)
	{
		printf("\ntarget[%d]=%d",i,target[i]);
	}


 	return 0;
}

