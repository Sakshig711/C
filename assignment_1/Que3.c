/*.Scan temperature from user in celcius.Convert it in farhenheit*/
#include<stdio.h>

int main()
{
	int temp;
	float far;
	printf("Enter the temperature = ");
	scanf("%d",&temp);
	far=(temp*9/5)+32;
	printf("temperature in farhenheit = %f",far);
	


 	return 0;
}

