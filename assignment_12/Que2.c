/*Q2.Scan an array of 6 integers from user.Print addition of all integers in the array.
pointer notation*/
#include<stdio.h>

int main()
{
	int num[6];
	int *p;
	p=&num[0];
	int i,sum=0;
	puts("Enter the 6 integers = ");
	for(i=0; i<=5; i++)
	{
		scanf("%d",&num[i]);
		sum=sum+*(p+i);
	}
	printf("Sum=%d",sum);
 	return 0;
}

