/*Q12.Scan array of 5 characters from user.Convert all lowercase alphabets in uppercase alphabets.
Print array again.*/
#include<stdio.h>

int main()
{
	char ch[5];
	char *p=&ch[0];
	int i;
	printf("Enter the 5 characters = ");
	for(i=0; i<=4; i++)
	{
		
		scanf("%c",(p+i));
		scanf("%c",(p+i));
		*(p+i)=*(p+i)-32;
	}
	 
	for(i=0; i<=4; i++)
	{
		printf("\nch[%d]= %c ",i,*(p+i));
	}
	
 	return 0;
}

