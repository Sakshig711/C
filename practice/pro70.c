#include<stdio.h>

int main()
{
	char source[50];
	char target[50];
	
	int i=0,j=0;
	puts("Enter the string = ");
	gets(source);
	while(source[i]!='\0')
	{
		target[j]=source[i];
		i++;
		j++;
	}
	
//	printf("%s ",target);
	puts(target);	
	
 	return 0;
}
