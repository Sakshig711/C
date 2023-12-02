#include<stdio.h>

typedef struct number
{
	int num[5];
	
}number;
int min(number t1);
int main()
{
	number s1,s2;
	int i,min1,min2;
	puts("Enter the array = ");
	for(i=0; i<5; i++)
	{
		scanf("%d",&s1.num[i]);
	}
	puts("Enter the array = ");
	for(i=0; i<5; i++)
	{
		scanf("%d",&s2.num[i]);
	}
	min1=min(s1);
	min2=min(s2);
	if(min1<min2)
	{
		printf("minimum number is = %d",min1);
	}
	else
	{
		printf("minimum number is = %d",min2);
	}

 	return 0;
}
int min(number t1)
{
	int min=t1.num[0];
	
	int i;
	//puts("enter the array = ");
	for(i=0; i<5; i++)
	{
		if(min>t1.num[i])
		{
			min=t1.num[i];
		}
	}
	return min;
		
	
	
	
}


