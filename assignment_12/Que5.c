/*
Q5.Declare and initialize an array of 8 integers.Check how many times 10 is present in the array.
pointer notation*/
#include<stdio.h>

int main()
{
	int num[8]={6,8,10,20,38,10,70,10};
	int count=0,i;
	for(i=0; i<=7; i++)
	{
		if(num[i]==10)
		{
			count++;
		}
		
	}
	printf("\nCount=%d",count);

 	return 0;
}

