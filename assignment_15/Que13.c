/*13.Scan 2 strings from user.Use compiletime array to store strings.
Swap these 2 strings.*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50];
	char str2[50];
	char *p=str1;
	char *q=str2;
	puts("Enter the 2 strings = ");
	gets(str1);
	gets(str2);
	
	char temp[50];
	strcpy(temp,str1);
	strcpy(str1,str2);
	strcpy(str2,temp);
	puts(str2);
 	return 0;
}

