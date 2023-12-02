/*Q7.Declare and initialize an array of 8 characters.Count how many times 'A' or 'a' is present in the array.
base address notation*/
#include<stdio.h>

int main()
{
	char ch[8]={'G','i','u','a','A','y','A','s'};
	int i,count=0;
	char *p= &ch[0];
	for(i=0; i<=7; i++)
	{
		if(*(p+i)=='A' || *(p+i)=='a')
		{
			count++;
		}
	}
	printf("\nCount=%d",count);

 	return 0;
}

