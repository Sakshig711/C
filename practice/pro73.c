#include<string.h>
#include<stdio.h>

int main()
{
	char str[50];
	int length;
	puts("Enter the string = ");
	gets(str);
	
	length=strlen(str);
	printf("%d",length);


 	return 0;
}

