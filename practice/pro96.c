#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char *ptr[0];
	
	for(i=0; i<10; i++)
	{
		ptr[i]=getstring();
	}
	for(i=0; i<10; i++)
	{
		if(*(ptr+i)=='a' || *(ptr+i)=='A')
		{
			//puts(ptr);
			printf("%d",*(ptr+i));
		}
	}

 	return 0;
}
void getstring()
{
	char str[50];
	puts("Enter the string = ");
	gets(str);
	char *p;
	int len;
	len=strlen(str);
	p=(char*)malloc(len+1);
	strcpy(p,str);
	return p;
	
}

