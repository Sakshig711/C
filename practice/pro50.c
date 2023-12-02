/*
----1
---121
--12321
-1234321
123454321
-1234321
--12321
---121
----1*/
#include<stdio.h>

int main()
{
	int i,j,k,l,m,s,a,b,c,d;
	for(i=1; i<=5; i++)
	{
		for(s=4; s>=i; s--)
		{
			printf("-");
		}
		for(j=1; j<=i; j++)
		{
			printf("%d",j);
		}
		for(k=i-1; k>=1; k--)
		{
			printf("%d",k);
		}
		for (l=4; l>=i; l--)
		{
			printf("-");
		}
		printf("\n");
	}
	for(a=4; a>=1; a--)
	{
		for(c=5; c>a; c--)
		{
			printf("-");
		}
		for(b=1; b<=a; b++)
		{
			printf("%d",b);
		}
		for(d=a-1; d>=1; d--)
		{
			printf("%d",d);
		}
		for(m=5; m>a; m--)
		{
			printf("-");
		}
		printf("\n");
	}
	

 	return 0;
}

