/*8.Scan array of 10 integers from user.Sort this array in ascending order.*/
#include<stdio.h>

int main()
{
	int num[10];
	//int as[10];
	int i,j;
	int temp;
	puts("Enter 10 elements = ");
	for(i=0; i<=9; i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0; i<=9; i++)
	{
		for(j=i+1; j<=9; j++)
		{
			if(num[i]>num[j])
			{
				temp=num[i];
			    num[i]=num[j];
				num[j]=temp;
			}
		}
	}
	printf("Assending order = ");
	for(i=0; i<=9; i++)
	{
		printf(" %d ",num[i]);
	}

 	return 0;
}

