/*scan n integers from user store then and print their additon*/
#include<stdio.h>

int main()
{
	int n;
	printf("Enter no of elements u want = ");
	scanf("%d",&n);
	int *p;
	int i,sum=0;
	p=(int *) malloc (n*sizeof(int));
	puts("Enter the values = "); 
	for (i=0; i<=n-1; i++)
	{
		scanf("%d",p+i);
	}
	for (i=0; i<=n-1; i++)
	{
		sum=sum+*(p+i);
    }
    printf("Sum=%d",sum);


 	return 0;
}

