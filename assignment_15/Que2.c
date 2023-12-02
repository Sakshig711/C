/*2.Scan a string from user.Define function countword() to count number of words in string.*/
#include<stdio.h>
void countword(char *p);
int main()
{
	char str[50];
	char *s=str;
	puts("Enter the string = ");
	gets(str);
	countword(s);

 	return 0;
}
void countword(char *p)
{
	int i=0;
	int cnt=0;
	while(*(p+i)!='\0')
	{
		if(*(p+i)==32)
		{
			cnt++;
		}
		i++;
	}
	printf("No of words = %d",cnt+1);
}

