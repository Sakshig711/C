
/*15.Scan 3 citynames from user.Do not waste memory to store citynames.Check if user has given pune or not.*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* getstring();
int main()
{
	char *p;
	char *q;
	char *r;
	p=getstring();
	q=getstring();
	r=getstring();
	if(strcmp(p,"pune") || strcmp(q,"pune") || strcmp(q,"pune") )
	{
		printf("Pune exists");
	}
	else
	{
		printf("Pune does not exists");
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

