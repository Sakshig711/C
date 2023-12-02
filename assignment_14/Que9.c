/*
9.Complete the following main() function.
	int main()
	{
		int number[10];
		scanarray(number,10);
		sort_asc(number,10);
		printarray(number,10);
	}*/
#include<stdio.h>
void printarray(int *p,int n);
void scanarray(int *p, int n);
void sort_asc(int *p, int n);
int main()
{

	int number[10];
	int temp;
	scanarray(number,10);
	sort_asc(number,10);
	printarray(number,10);
	

 	return 0;
}
void scanarray(int *p, int n)
{
	int i;
	puts("Enter the elements = ");
	for(i=0; i<=n-1; i++)
	{
		scanf("%d",p+i);
	}
}
void sort_asc(int *p, int n)
{
	int i,j;
	int temp;
	for(i=0; i<=9; i++)
	{
		for(j=i+1; j<=9; j++)
		{
			if(*(p+i)>*(p+j))
			{
				temp=*(p+i);
			    *(p+i)=*(p+j);
				*(p+j)=temp;
			}
		}
	}
}
void printarray(int *p,int n)
{
	int i;
	for(i=0; i<=n-1; i++)
	{
		printf(" %d ",*(p+i));
	}
	
}

