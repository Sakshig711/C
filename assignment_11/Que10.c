/*
10.Print following pattern.
----1
---121
--12321
-1234321
123454321
-1234321
--12321
---121
----1**/
#include<stdio.h>

int main()
{
	int i,j,s,k,l,m,o,n;
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
		printf("\n");
	}
	for(l=5; l>=1; l--)
	{
		for(n=l; n<5; n++)
		{
			printf("-");
		}
		for(m=1; m<=l; m++)
		{
			printf("%d",m);
		}
		for(o=l-1; o>=1; o--)
		{
			printf("%d",o);
		}
		printf("\n");
	}
	

 	return 0;
}

