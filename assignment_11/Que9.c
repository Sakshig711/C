/*
----A
---ABA
--ABCBA
-ABCDCBA
ABCDEDCBA*/
#include<stdio.h>

int main()
{
	char i,j,s,k;
	for(i='A'; i<='E'; i++)
	{
		for(s='D'; s>=i; s--)
		{
			printf("-");
		}
		for(j='A'; j<=i; j++)
		{
			printf("%c",j);
		}
		for(k=i-1; k>='A'; k--)
		{
			printf("%c",k);
		}
		printf("\n");
	}

 	return 0;
}

