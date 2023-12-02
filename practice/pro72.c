/*scan a string def func length to find length of string*/ 
#include<stdio.h>
int length(char *p);
int main()
{
	char str[50];
	char *p=str;
	int res;
	puts("Enter the string = ");
	gets(str);
	res=length(str);
	printf("\nlength of string is = %d",res);

 	return 0;
}
int length(char *p)
{
	int i=0;
	while(*(p+i)!='\0')
	{
		i++;
	}
	return i;
}

