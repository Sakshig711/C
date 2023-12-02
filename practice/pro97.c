#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char path[]="D:\\my_folder\\my_code.txt";
	fp=fopen(path,"w");
	if(fp==NULL)
	{
		puts("file is not connected");
		exit(1);
	}
	char str[100];
	while(1)
	{
		puts("Enter a string = ");
		gets(str);
		if(strcmp(str,"stop")==0)
		{
			break;
		}
		fputs(str,fp);
	}


 	return 0;
}

