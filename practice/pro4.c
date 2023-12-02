#include<stdio.h>


int main()
{
	int a,b;
	a=10;
	b=20;
	 
    int *pa;
	pa=&a;
	 
	int *pb;
	pb=&b;
	 
	int ans;
	ans=*pa + *pb;
	printf("\nAns=%d",ans);
	 
	int **ppa;
	ppa=&pa;
	 
	int **ppb;
	ppb=&pb;
	 
	int *pans;
	pans=&ans;
    *pans=**ppa *  **ppb;
	printf("\nAns=%d",*pans);
	
	return 0;
}
