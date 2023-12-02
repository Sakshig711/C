/*
7.Scan array of 8 integers from user.Find the minimum and maximum value from array.
Print their multiplication.
*/
#include<stdio.h>

int main()
{
	int s1[8];
	int *p=&s1[0];

	int temp;
	int i,j;
	puts("Enter 8 integers = ");
	for(i=0; i<=7; i++)
	{
		scanf("%d",(p+i));
	}
	for(i=0; i<=7; i++)
	{
		for(j=i+1; j<=7; j++)
		{
			if(s1[j]>s1[i])
			{
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
		
		}
	}
	
	printf("\nMaximum no is = %d\nMinimun no is = %d",*(p+0),*(p+7));
	

 	return 0;
}

