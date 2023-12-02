#include<stdio.h>

int main()
{
	int num[3][4];
	int i,j,cnt=0;
	puts("Enter the array = ");	
	for(i=0; i<=2; i++)
	{
		for(j=0; j<=3; j++)
		{
			scanf("%d",&num[i][j]);
			if(num[i][j]==10)
			{
				cnt++;
				break;
			}
		}
	}
	if(cnt>0)
	{
		printf("10 is present in array");
	}

 	return 0;
}

