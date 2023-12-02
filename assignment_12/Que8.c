/*Q8.Declare and initialize an array of 10 characters.Replace every occurrence of 'a' by 'e'.
Print the resultant array again.
pointer notation
*/
#include<stdio.h>

int main()
{
	char ch[10]={'G','i','u','a','A','y','A','s','a','p'};
	int i;
	char *p=&ch[0];
	
	for(i=0; i<=9; i++)
	{
		if(*(p+i)=='a')
		{
			*(p+i)='e';
		}
		
	}
	for(i=0; i<=9; i++)
	{
		printf("\nch[%d]=%c",i,*(p+i));
	}

 	return 0;
}

