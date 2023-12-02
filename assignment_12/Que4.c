/*Q4.Declare and initialize an array of 8 integers.Print addition of only even numbers in array.
base address notation*/
#include<stdio.h>

int main()
{
	int num[8]={6,8,17,20,38,39,70,24};
	int sum=0,i;
	int *p=&num[0];
	for(i=0; i<=7; i++)
	{
		if(*(p+i)%2==0)
		{
			sum=sum+*(p+i);
		}
	}
	printf("\nSum=%d",sum);

 	return 0;
}

