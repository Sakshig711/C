#include<stdio.h>
/*3.Define a function getdata() to scan a character and a fraction value from user.*/

void getdata();
int main()
{
	getdata();
	return 0;
}
void getdata()
{
	char ch;
	float f;
	printf("\nEnter the character = ");
	scanf("%c",&ch);
	
	printf("\nEnter the freaction value = ");
	scanf("%f",&f);
}
