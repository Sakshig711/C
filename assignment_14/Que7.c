/*7.Complete the following main() function to scan 2 numbers from user and print their addition.
Condition = You can not declare your own variable in program.You have to use only given.
	int main()
	{
		int *p;
	}*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;
	p=(int *)malloc(2*sizeof(int));
	puts("Enter the numbers = ");
	scanf("%d%d",p+0,p+1);
	printf("Sum is %d",*(p+0) + *(p+1));
 	return 0;
}

