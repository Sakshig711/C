/*10.Scan a matrix 3*4.Scan another number from user.Check if that number is present in the array or not.
Check your code for different inputs********/
#include<stdio.h>
//#include<string.h>
int main()
{
	int i,j;
	int num[3][4];
	//int *p=num[0][0];
	int n;
	
	puts("Enter your array = ");
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			scanf("%d",&num[i][j]);
			
		}
	}
	puts("Enter the number = ");
	scanf("%d",&n);
	
	int res;
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			//res=strcmp(num[i][j],'n');
			if(num[i][j]==n)
			{
				//printf("No is present in array  ");
				break;
			}
		
		}
		if(num[i][j]==n)
		{
			printf("No is present in array  ");
			break;
		}
	
	}
	if(i==3)
		{
			printf("No is not present in array  ");
			//break;
		}
	

 	return 0;
}

