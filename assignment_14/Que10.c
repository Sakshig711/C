/*10.Complete the following main() function.
	int main()
	{
		float number[10];
		scanarray(number,10);
		float max;
		max = largest(number,10);
		printf("\nMaximum number = %f",max);
		sort_desc(number,10);
		printarray(number,10);
		return 0;
	}*/
#include<stdio.h>
void scanarray(float *p,int n);
float largest(float *p, int n);
void sort_desc(float *p, int n);
void printarray(float *p, int n);
int main()
{
	float number[10];
	scanarray(number,10);
	float max;
	max = largest(number,10);
	printf("\nMaximum number = %f ",max);
	sort_desc(number,10);
	printarray(number,10);

 	return 0;
}
void scanarray(float *p,int n)
{
	int i; 
	puts("Enter the 10 elements = ");
	for(i=0; i<=n-1; i++)
	{
		scanf("%f",p+i);
	}
}
float largest(float *p, int n)
{
	int i,j;
	int temp;
	for(i=0; i<=n-1; i++)
	{
		for(j=i+1; j<=n-1; j++)
		{
			if(*(p+i)>*(p+j))
			{
				temp=*(p+i);
			    *(p+i)=*(p+j);
				*(p+j)=temp;
			}
		}
	}
	return *(p+9);
}
void sort_desc(float *p, int n)
{
	int i,j,temp;
	for(i=0; i<=n-1; i++)
	{
		for(j=i+1; j<=n-1; j++)
		{
			if(*(p+i)<*(p+j))
			{
				temp=*(p+j);
				*(p+j)=*(p+i);
				*(p+i)=temp;
			}
		}
	}
}
void printarray(float *p, int n)
{
	int i;
	printf("\nDecending array =  ");
	for(i=0; i<=n-1; i++)
	{
		printf(" %f ",*(p+i));
	}
}

