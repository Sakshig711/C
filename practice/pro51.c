#include<stdio.h>
void addition(int x,int *pans);
int main()
{
	int num[8]={5,8,1,16,22,23,24,25};
	int i,ans=0,sum;
	//int *p=&sum;
	
	for(i=0; i<=7; i++)
	{
		addition(num[i],&ans);
	}
	printf("Sum=%d",ans);
	
 	return 0;
}
void addition(int x,int *pans)
{
	*pans=*pans+x;
}

