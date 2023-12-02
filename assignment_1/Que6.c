/*Scan principle amount,rate of interest and number of years from user.Calculate 
simple interest.*/
#include<stdio.h>

int main()
{
	int princi,rate,time;
	float interest;
	printf("Enter the given data = ");
	scanf("%d%d%d",&princi,&rate,&time);
	interest=(princi+rate+time)/100;
	printf("\ninterest=%f",interest);


 	return 0;
}

