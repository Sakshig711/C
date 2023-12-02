/*
4.Scan 2 arrays of 8 integers from user.Print addition of all elements of each array.
Use of functions is expected.Remember,one function for each task.*/
#include<stdio.h>
void add(int *p, int *x);
int main()
{
	int num[8];
	int arr[8];
	int i;
	puts("Enter 8 integers for num = ");
	for(i=0; i<=7; i++)
	{
		scanf("%d",&num[i]);
	}
	
	puts("Enter 8 integers for arr = ");
	for(i=0; i<=7; i++)
	{
		scanf("%d",&arr[i]);
	}
	add(&num[0],&arr[0]);
	
 	return 0;
}
void add(int *p, int *x)
{
	int i;
	int sum1=0,sum2=0;
	for(i=0; i<=7; i++)
	{
		sum1=sum1+*(p+i);
	}
	for(i=0; i<=7; i++)
	{
		sum2=sum2+*(x+i);
	}
	printf("\nsum of num Array = %d",sum1);
	printf("\n\nsum of arr Array = %d",sum2);
}

