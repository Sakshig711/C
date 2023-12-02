/*1.Scan array of 10 integers from user.Print addition of all integers.
pointer notation.
*/
#include<stdio.h>

int main()
{
	int num[10];
	int *p;
	p=&num[0];
	int i;
	int sum=0;
	puts("Enter 10 elements = ");
	for(i=0; i<=9; i++)
	{
		scanf("%d",p+i);
	}
	for(i=0; i<=9; i++)
	{
		sum=sum+*(p+i);
	}
	printf("\nSum=%d",sum);


 	return 0;
}

