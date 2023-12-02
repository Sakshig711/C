#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char str[50];
	int len;
	puts("Enter the string = ");
	gets(str);
	
	len=strlen(str);
	char *p;
	p=(char*)malloc(len+1);
	strcpy(p,str);
	puts(p);

 	return 0;
}

