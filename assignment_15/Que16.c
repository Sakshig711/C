/*16.Scan a string from user.Check if it is pallindrome.You can create only one array here.
(compiletime or runtime but only one array to store string)*******/
#include<stdio.h>

int main()
{
	char source[50];
	char target[50];
	puts("Enter the string = ");
	gets(source);
	int i=0;
	while(source[i]!='\0')
	{
		i++;
	}
	i--;
	int j=0;
	while(i>=0)
	{
		target[j]=source[i];
		i--;
		j++;
	}
	target[j]='\0';
	printf("In reverse order = %s",target);
	
	if(target==source)
	{
		printf("\npallindrome");
	}
	else
	{
		printf("\nNot pallindrome");
	}


 	return 0;
}

