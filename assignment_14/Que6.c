/*6.Complete the following main() function to scan a number from user and print its square.
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
	p=(int *)malloc(1*sizeof(int));
	puts("Enter the number = ");
	scanf("%d",p+0);
	printf("Square is %d",(*(p+0)) * (*(p+0)) );


 	return 0;
}

