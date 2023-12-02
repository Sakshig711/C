/*7.Scan 8 alphabets from user in an array of characters.Define function toUppercase() to
convert all alphabets in uppercase.Define function print() to print all elements of aray.*/
#include<stdio.h>
void touppercase(char *p, int n);
void print(char *p,int n);
int main()
{
	char ch[8];
	int i,t;
	puts("Enter the 8 alphabets = ");
	for(i=0; i<=7; i++)
	{
		scanf("%c",&ch[i]);
		//scanf("%c",&ch[i]);
		scanf("%c",&t);
	}
	touppercase(ch,8);
	print(ch,8);

 	return 0;
}
void touppercase(char *p, int n)
{
	int i;
	for(i=0; i<=7; i++)
	{
		*(p+i) = *(p+i)-32;
	}
}
void print(char *p,int n)
{
	int i;
	for(i=0; i<=7; i++)
	{
		printf("\nnum[%d]= %c ",i,*(p+i));
	}
}

