/*3.For following main(), complete the remaining code.
	int main()
	{
		int num[6];
		scanarray(num,6);  //this function scans elements of array from user 
		printarray(num,6); //this function prints elements of array
	}	
*/
#include<stdio.h>
void printarray(int *p, int n);
void scanarray(int *p, int n);
int main()
{
	int num[6];
	scanarray(num,6);  //this function scans elements of array from user 
	printarray(num,6); //this function prints elements of array
	
	return 0;
}
void scanarray(int *p, int n)
{
	int i;
	puts("Enter 8 integers = ");
	for(i=0; i<=n-1; i++)
	{
		scanf("%d",(p+i));
	}
}
	
void printarray(int *p, int n)
{
	int i;
	for(i=0; i<=n-1; i++)
	{
		printf("\n\nnum[%d]=%d",i,*(p+i));
	}
}

