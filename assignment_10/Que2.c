#include<stdio.h>
void myfun(int **m , int **n);
int main()
{
	int a = 10,b = 15;
	printf("before%d-%d",a,b);  //10 , 15
	int *p=&a;
	int *q=&b;
	
	myfun(&p,&q);
	printf("\n\nafter%d-%d",a,b);  // 12 , 19
 	return 0;
}
void myfun(int **m , int **n)
{
	**m=12;
	**n=19;
}


 	

