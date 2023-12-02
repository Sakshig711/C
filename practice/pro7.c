#include<stdio.h>
void exo(int a,int *psquare,int *pcube);
int main()
{
	int x,square,cube;
	x=5;
	
	exo(x,&square,&cube);
	printf("\n\n Square=%d   Cube=%d",square,cube);


 	return 0;
}
void exo(int a,int *psquare,int *pcube)
{
	*psquare=a*a;
	*pcube=a*a*a;
}

