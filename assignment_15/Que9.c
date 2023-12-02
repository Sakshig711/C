/*9.Scan a string from user.Define function tolowercase() to convert given string in lowercase character.*/
#include<stdio.h>
void tolowercase(char *p);
int main()
{
	char str[50];
	char *p=str;
	puts("Enter the string in CAPITAL = ");
	gets(str);
	tolowercase(str);

 	return 0;
}
void tolowercase(char *p)
{
	int i=0;
	while(*(p+i)!='\0')
	{
		*(p+i)=*(p+i)+32;
		i++;
	}
	puts(p);
	//printf("%s",*(p+i));
	
	
}

