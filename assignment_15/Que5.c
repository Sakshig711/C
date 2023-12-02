/*5.For below main() function,scan 2 integers from user.Print their addition.
Do not declare any variable of your own.
int main()
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;
	p=(int*)malloc(2*sizeof(int));
	int i;
	puts("Enter the numbers = ");

	for(i=0; i<=1; i++)
	{
		scanf("%d",&*(p+i));
		
	}
	printf("%d",*(p+0)+*(p+1));

 	return 0;
}

