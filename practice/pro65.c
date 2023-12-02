#include<stdio.h>
#include<stdlib.h>
int * scandata(int n);
int add(int n,int* p);
int main()
{
	//int num[];
	int n,ans;
	int * ptr;
	puts("Enter how many elements u want = ");
	scanf("%d",&n);
	ptr=scandata(n);
	ans=add(n,ptr);
	printf("\nSum is %d",ans);
 	return 0;
}
int * scandata(int n) 
{
	int i;
	int *p;
	p=(int*)malloc(n*sizeof(int));
	puts("Enter the elements = ");
	for(i=0; i<=n-1; i++)
	{
		scanf("%d",p+i);
	}
	return p;
}
int add(int n,int* p)
{
	int i,sum=0;
	for(i=0; i<=n-1; i++)
	{
		sum=sum+*(p+i);
	}
	return sum;
	
}

