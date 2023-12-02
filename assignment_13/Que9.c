/*9.Scan array of 6 alphabets from user.User should enter only capital alphabet.If user enters any letter other than 
capital alphabet,reject it and ask user to enter capital only.Print whole array.*/
#include<stdio.h>

int main()
{
	int ch[6];
	int i;
	int *p=&ch[0];
	int t;
	puts("Enter 6 alphabets = ");
	for(i=0; i<=5; i++)
	{
		scanf("%c",&ch[i]);
		scanf("%c",&t);
		
		if(*(p+i)>='a' && *(p+i)<='z')
		{
			puts("Enter capital alphabet = ");
			scanf("%c",p+i);
			
		}
		
	}
	
	for(i=0; i<=5; i++)
	{
		printf("\nch[%d] = %c",i, *(p+i));
	}

 	return 0;
}

