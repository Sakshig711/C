/*5.Scan array of 8 fractions from user in main().
Define function greatest() to find the greatest fraction value in array.Print this value in main().

*/
#include<stdio.h>

int main()
{
	int num{8};
	int i;
	puts("Enter 8 fraction value = ");
	for(i=0; i<=7; i++)
	{
		scanf("%f",&num[i]);
	}
	gretest(&num[0],8);

 	return 0;
}
void gretest(int *px, int n)
{
	if()
}

