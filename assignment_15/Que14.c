/*
14.Scan 2 strings from user without wasting any memory.Swap these 2 strings.*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* getstring();
int main()
{
	char *p;
	char *q;
	char temp[50];
	p=getstring();
	q=getstring();
	
	strcpy(temp,p);
	strcpy(p,q);
	strcpy(q,temp);
	puts("after swapping = ");
	puts(q);
	

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

