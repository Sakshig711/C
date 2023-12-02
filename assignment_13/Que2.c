/*
2.Scan an array of 8 characters from user.Count number of alphabets,
number of digits and number of special symbols in array.*/

#include<stdio.h>

int main()
{
	char num[8];
	char t;
	int i,cnt1=0,cnt2=0,cnt3=0;
	char *p= &num[0];
	puts("Enter the random values = ");
	for(i=0; i<=7; i++)
	{
		scanf("%c",&num[i]);
		scanf("%c",&t);
	}
	
	for(i=0; i<=7; i++)
	{
		if(*(p+i)>='0' && *(p+i)<='9')
		{
			cnt1++;
		}
		else if(*(p+i)>='A' && *(p+i)<='Z' || *(p+i)<='a' && *(p+i)>='z')
		{
			cnt2++;	
		}
		else
		{
			cnt3++;		
		}	
	}
	printf("\nNo of digits = %d",cnt1);
	printf("\nNo of alphabets = %d",cnt2);
	printf("\nNo of special symbols = %d",cnt3);
 	return 0;
}

