/*8.Scan a string from user.Replace each vowel in string by '?'.*/
#include<stdio.h>

int main()
{
	char str[50];
	char *p=str;
	puts("Enter the string = ");
	gets(str);
	int i=0;
	while(*(p+i)!='\0')
	{
		if(*(p+i)=='a' || *(p+i)=='e'|| *(p+i)=='i' || *(p+i)=='o' || *(p+i)=='u')
		{
			*(p+i)='?';
		}
		i++;
	}
	
	puts(str);
 	return 0;
}

