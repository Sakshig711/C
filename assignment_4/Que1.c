/*Scan a gender from user.If user enters m OR M , print MALE.
If user enters f OR F , print FEMALE.Print wrong input for any other character.*/
#include<stdio.h>

int main()
{
	int gen;
	printf("Enter the gender = ");
	scanf("%c",&gen);
	
	switch(gen)
	{
		case 'm':printf("Male");
				break;
			
		case 'f':printf("Female");
				break;
			
		default : printf("Wrong input ");	
	}
	


 	return 0;
}

