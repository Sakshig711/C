/*Q9.Scan array of 8 characters from user.Count how many capital alphabets user has given.
pointer notation
*/
#include<stdio.h>

int main()
{
	char ch[8];
	int i,count=0;
	
	char *p=&ch[0];
	
	printf("Enter 8 characters = ");
	for(i=0; i<=7; i++)
	{
		scanf("%c",(p+i));
			
		if(*(p+i)>='A' && *(p+i)<='Z')
		{
			count++;
		}
		scanf("%c",(p+i));
		
	}
	printf("\nCount=%d",count);	

 	return 0;
}

