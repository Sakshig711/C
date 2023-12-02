
/*5.Complete the following main() function.}*/
#include<stdio.h>
#include<stdlib.h>
int* createArray(int n);
void scanarray(int* p, int n);
int addition(int* p, int n);
int main()	
{
	int n;
	int * ptr;
	puts("How many elements u want = ");
	scanf("%d",&n);
	ptr = createArray(n);//this function allocates memory for n integers.
	scanarray(ptr,n);//this function scans n integers.
	int sum;
	sum = addition(ptr,n);//this function makes addition of n integers.
	printf("\nSum = %d",sum);
	return 0;
}
int* createArray(int n)
{
	return (int*)malloc(n*sizeof(int));
	
}
void scanarray(int* p, int n)
{
	int i;
	puts("Enter the elements = ");
	for(i=0; i<=n-1; i++)
	{
		scanf("%d",p+i);
	}
}
int addition(int* p, int n)
{
	int i;
	int add=0;
	for(i=0; i<=n-1; i++)
	{
		add=add+*(p+i);
	}
	return add;
}

