/*1.Declare and initialize an array of 8 integers.Replace every occurrence of 15 by 225.
Print whole array.
*/
#include<stdio.h>

int main()
{
	int num[8]={5,15,16,23,25,15,37,28};
	int i;
	int *p=&num[0];
	for(i=0; i<=7; i++)
	{
		if(*(p+i)==15)
		{
			*(p+i)=225;
		}
	}
	for(i=0; i<=7; i++)
	{
		printf("\nnum[%d]=%d",i,*(p+i));
	}
	

 	return 0;
}

