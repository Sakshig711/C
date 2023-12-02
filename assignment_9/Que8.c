/*8)Scan an integer, a character and a fraction value from user and print it.
(Remeber the problem we faced here,Scan each value using different scanf() statements.)*/

#include<stdio.h>

int main()
{
	int x;
	char ch;
	float f;
	
	printf("\nEnter the value = ");
	scanf("%d",&x);
	
	printf("\nEnter the character = ");
	scanf("%c",&ch);
	scanf("%c",&ch);
	
	printf("\nEnter the fraction = ");
	scanf("%f",f);


 	return 0;
}

