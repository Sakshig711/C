/*3.WAP to input all sides of a triangle and check whether triangle is valid or not.*/
#include<stdio.h>

int main()
{
	int a,b,c;
	puts("Enter the 3 sides of triangle = ");
	scanf("%d%d%d",&a,&b,&c);
	if(a==0 || b==0 || c==0)
	{
		printf("Triangle is not valid");
	}
	else
	{
		printf("Triangle is valid");
	}

 	return 0;
}

