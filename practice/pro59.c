/*count only even numbers in array*/
#include<stdio.h>
int cnt(int *px, int n);
int main()
{
	int num[8]={5,16,23,25,48,38,27,24};
	int res;
	res=cnt(&num[0],8);
	printf("No of Even numbers are = %d",res);
	
 	return 0;
}
int cnt(int *px, int n)
{
	int count=0,i;
	for(i=0; i<=n-1; i++)
	{
		if(*(px+i)%2==0)
		{
			count++;	
		}
	}
	return count;
}

