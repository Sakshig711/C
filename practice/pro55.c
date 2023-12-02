#include<stdio.h>

int add(int x,int n);
int main()
{
	int num[3]={10,20,30};
	int i,sum;
	for(i=0; i<=2; i++)
	{
		sum=add(num[i],3);
	}
	printf("\nSum=%d",sum);


 	return 0;
}
int add(int x,int n)
{
	static int sum=0;
	sum=sum+x;
	return sum;
}

