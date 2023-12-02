/*3)Keep scanning a number from user until he enters 0.Print addition of all the integers*/
#include<stdio.h>

int main()
{
	int n;
	int sum=0;
	
	while(1<3)
	{
		printf("\nEnter the number = ");
		scanf("%d",&n);
		if(n==0)
		{
			break;
		}
		sum=sum+n;
	}
	
	printf("Sum=%d",sum);
	

 	return 0;
}

