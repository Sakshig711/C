/*10)Scan a number from user in main().Define function power() to find square and cube of a number.
Print both results in main().*/

#include<stdio.h>
void power(int a,int *psq,int *pcb);
int main()
{
	int num,sq,cb;
	printf("\nEnter the number = ");
	scanf("%d",&num);
	power(num,&sq,&cb);
	printf("\nSquare=%d   Cube=%d",sq,cb);

 	return 0;
}
void power(int a,int *psq,int *pcb)
{
	*psq=a*a;
	*pcb=a*a*a;
}

