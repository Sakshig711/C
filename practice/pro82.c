#include<stdio.h>
void show(int *p,int r,int c);
int main()
{
	int arr[2][3]=  {
						6,12,34,
						56,65,78
					};
	
	show(&arr[0][0],2,3);
 	return 0;
}
void show(int *p,int r,int c)
{
	int i;
	for(i=0; i<=2*3; i++)
	{
		printf("\n%d",*(p+i));
	}
}

