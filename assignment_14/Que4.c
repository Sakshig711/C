/*4.Create an array of n intgers.Add  to each odd number in the array.
Print whole array after addition.
(Decide first,its compiletime or runtime)*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;
	int n;
	puts("Enter how many elements u want = ");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	int i;
	int sum=0;
	puts("Enter the elements = ");
	for(i=0; i<=n-1; i++)
	{
		scanf("%d",p+i);
		if(*(p+i)%2==1)
		{
			sum=sum+*(p+i);
		}
	}
	printf("\nSum of odd elements = %d",sum);
	for(i=0; i<=n-1; i++)	
	{
		printf("\n%d",*(p+i));
	}
	
	
	
 	return 0;
}

