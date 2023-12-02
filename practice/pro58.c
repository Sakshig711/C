#include<stdio.h>
void replace(int *px,int n);
int main()
{
	int num[3]={10,20,30};
	int i;
	replace(&num[0],3);
	for(i=0; i<=2; i++)
	{
		printf("\nnum[%d]=%d",i,num[i]);
	}

 	return 0;
}
void replace(int *px,int n)
{
	int i;
	for(i=0; i<=n-1; i++)
	{
		*(px+i)=*(px+i)+5;
	}
}

