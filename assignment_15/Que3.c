/*
3.Scan a string from user.Copy this string in another string.(pointer notation)
Do not use string.h header file.
*/
#include<stdio.h>

int main()
{
	char str[50];
	char ch[50];
	char *p=str;
	char *q=ch;
	puts("Enter the string = ");
	gets(str);
	int i=0;
	while(*(p+i)!='\0')
	{
		*(q+i)=*(p+i);
	}
	*(q+i)='\0';
	gets(ch);
	

 	return 0;
}

