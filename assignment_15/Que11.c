/*11.Complete the code for following main() function.
We are not wasting any memory for strings.
	int main()
	{
		char * p;
		p = getstring();
		printf("\nYour string = %s",p);
	}********/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* getstring();
int main()
{
	char * p;
	p = getstring();
	printf("\nYour string = %s",p);


 	return 0;
}
char* getstring()
{
	char *p;
	char str[50];
	int len;
	puts("Enter the string = ");
	gets(str);
	
	len=strlen(str);
	p=(char*)malloc(len+1);
	strcpy(p,str);
	return p;
}

