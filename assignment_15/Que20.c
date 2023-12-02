/*4.WAP print total number of days in a month using switch case.*/
#include<stdio.h>

int main()
{
	int choise;
	printf("Enter 1:\njan,march,may,july,aug,oct,dec\n\nEnter 2:\napril,june,sep,nov\n\nEnter 3:\nFeb\n");
	scanf("%d",&choise);
	
	switch(choise)
	{
		case 1: printf("31 Days");
			break;
			
		case 2: printf("30 Days");
			break;
			
		case 3: printf("29 Days in leap year othervise 28");
			break;
		default: printf("invalid input");
	}

 	return 0;
}

