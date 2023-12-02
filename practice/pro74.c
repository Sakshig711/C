#include<stdio.h>
#include<string.h>
int main()
{
	char source[50];
	char target[50];
	puts("Enter the string = ");
	gets(source);
	
	strcpy(target,source);
	puts(target);


 	return 0;
}

