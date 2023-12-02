#include<stdio.h>
int sum=0;
void add(int x,int n);
int main()
{
	int num[3]={10,20,30};
	int i;
	for(i=0; i<=2; i++)
	{
		add(num[i],3);
	}
	printf("\nSum=%d",sum);

 	return 0;
}
void add(int x,int n)
{
	sum=sum+x;
	
}

