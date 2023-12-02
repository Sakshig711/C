#include<stdio.h>
float* scandata(int n);
void add(int n, float * p);
int main()
{
	int n;
	float * ptr;
	puts("Enter how many fraction values u want = ");
	scanf("%d",&n);
	ptr=scandata(n);
	add(n,ptr);


 	return 0;
}
float* scandata(int n)
{
	float * p;
	p=(float*) malloc (n*sizeof(float));
	int i;
	puts("Enter elements of given array = ");
	for(i=0; i<=n-1; i++)
	{
		scanf("%f",p+i);
	}
	
	return p;
}
void add(int n, float * p)
{
	float sum=0.0;
	int i;
	for(i=0; i<=n-1; i++)
	{
		sum = sum+*(p+1);
	}
	printf("\nsum=%f",sum);
}


