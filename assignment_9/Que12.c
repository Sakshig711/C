#include<stdio.h>
int square(int len,int wid);
int main()
{
	int   length , width ;
	printf("\nEnter length and width\n");
	scanf("%d%d",&length,&width);
	if( square(length,width) )
	{
		printf("It is a square");
	}
	else
	{
		printf("It is a rectangle");
	}

 	return 0;
}
int square(int len,int wid)
{
	if(len==wid)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

