/*A customer has deposited 10000 Rs in bank in the form of Fixed Deposit for 3 years
having rate of interest 5.00%.Find the total amount he will get after 3 years.
If total amount he will receive is greater than 12000/-,then suggest him
to invest them in mutual fund else suggest him to buy the gold.*/
#include<stdio.h>

int main()
{
	int princi=10000;
	int time=3;
	int rate=5;
	float itr=(princi+rate+time)/100;
	if(princi+itr>12000)
	{
		printf("invest in mutual");
	}
	else
	{
		printf("Buy gold");
	}
	


 	return 0;
}

