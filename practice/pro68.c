#include<stdio.h>

int main()
{
	char str[50];
	char*p=&str[0];
	int i=0;
	int cnt=0;
	puts("Enter the string = ");
	gets(str);
	while(*(p+i)!='\0')
	{
		if(*(p+i)=='a' || *(p+i)=='A')
		{
			cnt++;
		}
		i++;	
	}
	printf("No of a is = %d",cnt);

 	return 0;
}

