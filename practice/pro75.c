#include<stdio.h>
#include<string.h>
int main()
{
	char fst[50];
	char scnd[50];
	int res;
	puts("Enter the two string = ");
	gets(fst);
	gets(scnd);
	
	res=strcnp(fst,scnd);
	if(res==0)
	{
		printf("Equal");
	}
	else
	{
		printf("unequal");
	}

 	return 0;
}

