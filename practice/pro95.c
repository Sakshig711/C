#include<stdio.h>

int main()
{
	char arr[]="D:\\my_folder\\my_code.txt";
	FILE *p;
	p=fopen(&arr[0],"r");
	if(p==NULL)
	{
		puts("file is not connected");
	}
	else
	{
		puts("file is connected");
	}

 	return 0;
}

