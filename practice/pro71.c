/*to count no of vovels in string*/
#include<stdio.h>

int main()
{
	char str[50];
	char *p=str;
	puts("Enter the string = ");
	gets(str);
	int i=0;
	int cnt=0;
	while(*(p+i)!='\0')
	{
		if(*(p+i)=='a' || *(p+i)=='e' || *(p+i)=='i' || *(p+i)=='o' ||*(p+i)=='u')
		{
			cnt++;
		}
		i++;
	}
	printf("No of vowels = %d",cnt);

 	return 0;
}

