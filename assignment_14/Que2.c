/*2.Declare and initialize an array of 8 fraction values.Define function addition() to make addition 
of only those fraction values which are greater than 10.
base address notation*/
#include<stdio.h>
void addition (float *p);
int main()
{
	float num[8];
	int i;
	puts("Enter the elements = ");
	for(i=0; i<=7; i++)
	{
		scanf("%f",&num[i]);
	}
	addition(&num[0]);

 	return 0;
}
void addition (float *p)
{
	int i;
	float sum=0.0;
	for(i=0; i<=7; i++)
	{
		if(*(p+i)>10.0)
		{
			sum=sum+*(p+i);
			
		}
		
	}
	printf("\nSum=%f",sum);
}

