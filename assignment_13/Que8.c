/*int main()
	{
		int num[5];
	}
For given main() function,you have to scan 5 integers from user.But all those integers must be positive only.
If user enters any negative value,do not store that value in array and ask user to enter only positive value.
Then print array.*/
#include<stdio.h>

int main()
{
	int num[5];
	int *p=&num[0];
	int i;
	puts("Enter the array = ");
	for(i=0; i<=4; i++)
	{
		scanf("%d",&num[i]);
		if(*(p+i)<=0)
		{
			puts("Enter positive value = ");
			scanf("%d",&num[i]);
		}
	}
	for(i=0; i<=4; i++)
	{
		printf("\nnum[%d]=%d",i,*(p+i));
	}

 	return 0;
}

