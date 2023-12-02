/*
----1
---212
--32123
-1234321
123454321*/
#include<stdio.h>

int main()
{
	int i,j,k,s,a,b,c,d;
	for(i=1; i<=3; i++)
	{
		for(s=4; s>=i; s--)
		{
			printf("-");
		}
		for(j=i; j>=1; j--)
		{
			printf("%d",j);
		}
		for(k=2; k<=i; k++)
		{
			printf("%d",k);
		}
		printf("\n");
	}
	for(a=4; a<=5; a++)
	{
		for(b=a; b<=4; b++)
		{
			printf("-");
		}
		for(c=1; c<=a; c++)
		{
			printf("%d",c);
		}
		for(d=a-1; d>=1; d--)
		{
			printf("%d",d);
		}
		printf("\n");
		
	}

 	return 0;
}

