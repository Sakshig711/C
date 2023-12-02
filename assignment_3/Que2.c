/*Scan a character from user.If it is small case alphabet,convert it into capital alphabet.*/
#include<stdio.h>

int main()
{
	char ch;
	printf("enter the character = ");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z')
	{
		ch=ch+32;
		printf("\n%c",ch);
	}
	else
	{
		ch=ch-32;
		printf("\n%c",ch);
	}


 	return 0;
}

