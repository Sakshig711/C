/*Scan a range from user.Print even or odd for each number in the range.(using while)*/
#include<stdio.h>

int main()
{
	int a,b,i;
	printf("Enter the range = ");
	scanf("%d%d",&a,&b);
	i=a;
	while(i<b)
	{
		if(i%2==0)
		{
			printf("\n%d=Even",i);
		}
		else
		{
			printf("\n%d=Odd",i);
		}
		i++;		
	}
	


 	return 0;
}

