/*Q10.Scan 2 arrays of 5 integers from user.Perform indexwise addition of elements of 2 arrays into third array.
e.g.
first array  = 2  5  3  12   8
second array = 3  2  6   4  21
-------------------------------
Result array = 5  7  9  16  29
[] notation
*/
#include<stdio.h>

int main()
{
	int num[5];
	int source[5];
	int target[5];
	int i;
	puts("Enter 5 integers = ");
	for(i=0; i<=4; i++)
	{
		scanf("%d",&num[i]);
		
	}
	puts("Enter another 5 integers = ");
	for(i=0; i<=4; i++)
	{
		scanf("%d",&source[i]);
	}
	for(i=0; i<=4; i++)
	{
		target[i]=num[i]+source[i];
		printf("\ntarget[%d]=%d",i,target[i]);
	}
	
	

 	return 0;
}

