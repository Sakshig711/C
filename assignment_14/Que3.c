/*3.Create an array of 8 integers having name 'number'.Define function getarray() to scan number aray.
Define function printarray to print number array.Define function count() to count only odd numbers
int the array.Print this count in main() again.
pointer notation*/
#include<stdio.h>
void getarray(int * p);
void printarray(int * p);
int count(int * p);
int main()
{
	int number[8];
	int *p=&number[0];
	int ans;
	getarray(p);
	printarray(p);
	ans=count(p);
	printf("\nNo of odd numbers are %d",ans);


 	return 0;
}
void getarray(int * p)
{
	int i;
	puts("Enter 8 elements = ");
	for(i=0; i<=7; i++)
	{
		scanf("%d",p+i);
	}
}
void printarray(int * p)
{
	int i;
	for(i=0; i<=7; i++)
	{
		printf("\n number[%d]=%d",i,*(p+i));
	}
}
int count(int * p)
{
	int i;
	int cnt=0;
	for(i=0; i<=7; i++)
	{
		if(*(p+i)%2==1)
		{
			cnt++;
		}
	}
	return cnt;
}

