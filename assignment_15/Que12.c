/*12.Scan 2 strings from user without wasting any memory.
Check if these 2 strings are equal or not.*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* getstring();
int main()
{
	char *p;
	char *q;
	int res;
	p=getstring();
	q=getstring();
	
	res=strcmp(p,q);
	if(res==0)
	{
		printf("Strings are equal");
	}
	else
	{
		printf("Strings are unequal");
	}

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

