/*
1.WAP to calculate net salary of an employee.Scan basic salary from user.
Add 10% medical allowance to basic salary.
Add 15% travelling allowance to basic salary.
Add 5% bonus to total(basic+medical+travelling) salary.
Print the final salary*/
#include<stdio.h>

int main()
{
	int sal;
	printf("Enter the salary = ");
	scanf("%d",&sal);
	
	int med;
	med=(sal/100)*10;
	int trv;
	trv=(sal/100)*15;
	int bns;
	bns=(sal/100)*5;
	printf("\nTotal salary is = %d",sal+med+trv+bns);

 	return 0;
}

