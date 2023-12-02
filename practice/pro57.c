/*additon of 2 array using function*/
#include<stdio.h>
void add(int *px,int n);
int main()
{
	int num[3]={10,20,30};
	int arr[5]={5,16,23,25,47};
	
	add(&num[0],3);
	add(&arr[0],5);

 	return 0;
}
void add(int *px,int n)
{
	int i,sum=0;
	for(i=0; i<=n-1; i++)
	{
		sum = sum + *(px+i);
	}
	printf("\nSum=%d",sum);
}

