/*Q6.Declare and initialize an array of 8 integers.Check if 15 is present in the array or not.
pointer notation*/
#include<stdio.h>

int main()
{
	int num[8]={6,8,15,20,18,39,15,24};
	int *p=&num[0];
	int count=0,i;
	for(i=0; i<=7; i++)
	{
		if(*(p+i)==15)
		{
			count++;
		}
	}
	if(count==0)
	{
		printf("Not present");
	}
	else
	{
		printf("Present");
	}
	
	


 	return 0;
}

