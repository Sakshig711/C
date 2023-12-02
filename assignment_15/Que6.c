/*6.For below main() function,scan a string from user.Print its length.
Do not declare any variable of your own.
int main()
{
	char * p;
}*/
#include<stdio.h>

int main()
{
	
	char str[50];
	char * p;
	p=str;
	puts("Enter the string = ");
	gets(str);
	int i=0;
	while(*(p+i)!='\0')
	{
		i++;
	}
	printf("Length of string = %d",i);

 	return 0;
}

