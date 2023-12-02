/*15)Scan RollNumber,gender and age of a student.
If he or she enters gender other than m or f , ask him/her to re-enter gender.
If he/she enters age less than 7, ask him/her to re-enter the age.
After entering valid data, print that data.*/

#include<stdio.h>

int main()
{
	int r,age;
	char gen;
	printf("\nEnter the Roll number = ");
	scanf("%d",&r);
	printf("\nroll no=%d",r);
	
	while(1<5)
	{
		printf("\n\nEnter the gender = ");
		scanf("%c",&gen);
		
		if(gen=='m')
		{
			printf("\nYou are male");
			break;
		}
		else if (gen=='f')
		{
			printf("\nYou are female");
			break;
		}	
	}
	
	while(1<5)
	{
		printf("\nEnter the age = ");
		scanf("%d",&age);
		if(age>=8)
		{
			printf("\n\nAge=%d",age);
			break;
		}

	}
	
 	return 0;
}

