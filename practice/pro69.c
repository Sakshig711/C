#include<stdio.h>

int main()
{
	char str[50];
	char *p=str;
	int i=0;
	int cnt=0;
	puts("Enter the string = ");
	gets(str);
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

