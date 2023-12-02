#include<stdio.h>

int main()
{
	int arr[2][3];
	int i,j;
	puts("Enter the array = ");
	for(i=0; i<=1; i++)
	{
		for(j=0; j<=2; j++)
		{
			scanf("%d",&arr[i][j]);
			if(arr[i][j]==10)
			{
				break;
			}
			
		}
		if(arr[i][j]==10)
		{
			printf("\n10 is present");
			break;
		}
	}


 	return 0;
}

