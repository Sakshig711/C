#include<stdio.h>

void myfun(int *px, int n);
void print(int *px, int n);
int main()
{
	int num[10];
	int i;
	puts("Enter 10 integers = ");
	for(i=0; i<=9; i++);
	{
		scanf("%d",&num[i]);
	}
	
	myfun(&num[0],10);
	print(&num[0],10);
		
 	return 0;
}
void myfun(int *px, int n)
{	
	int i;
	for(i=0; i<=n-1; i++);
	{
		if(*(px+i)%2==1)
		{
			*(px+i)=0;
		}
	}
}
void print(int *px, int n)
{
	int i;
	for(i=0; i<=n-1; i++);
	{
		printf("num[%d]=%d",i,*(px+i));
	}
}

