/*1.Scan a string from user.Count number of words in a string.(Pointer notation)*/
#include<stdio.h>

int main()
{
	char str[50];
	char*p=str;
	int cnt=0;
	puts("Enter the string = ");
	gets(str);
	int i=0;
	while(*(p+i)!='\0')
	{
		if(*(p+i)==32)
		{
			cnt++;
		}
		i++;
	}
	printf("No of words = %d",cnt+1);
	

 	return 0;
}

