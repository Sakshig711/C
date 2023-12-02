/*6.For following main(), complete the remaining code.
	int main()
	{
		char mychar[6];
		scanarray(mychar,6);  //this function scans elements of array from user 
		printarray(mychar,6); //this function prints elements of array
	}*/
#include<stdio.h>
void printarray(char *p, int n);
void scanarray(char *p, int n);
int main()
{
	char mychar[6];
	
	scanarray(mychar,6);   
	printarray(mychar,6); 
	
	return 0;
}
void scanarray(char *p, int n)
{
	int i;
	char t;
	puts("Enter 6 integers = ");
	for(i=0; i<=n-1; i++)
	{
		scanf("%c",(p+i));
		scanf("%c",&t);
	
		
	}
}
void printarray(char *p, int n)
{
	int i;
	for(i=0; i<=n-1; i++)
	{
		printf("\n\nnum[%d]=%c",i,*(p+i));
	}
}

