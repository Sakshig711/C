#include<stdio.h>
int myfun(int a,int *m );
int main()
{
	
	int a = 10,b = 15;
	printf("%d-%d",a,b);  //10 , 15
	a = myfun(a,&b);
	printf("\n\n%d-%d",a,b);  // 12 , 19
 	return 0;
}
int myfun(int a,int *m )
{
	*m=19 ;
	return 12 ;
}


 

