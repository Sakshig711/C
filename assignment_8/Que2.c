#include<stdio.h>
/*2.Scan 3 integers in main().
Define function smallest() to find the smallest value of them.Print result in function only.
*/

void smallest(int a,int b,int c);
int main()
{
	int x,y,z;
	printf("Enter 3 integers = ");
	scanf("%d%d%d",&x,&y,&z);	
	
	smallest(x,y,z);

	return 0;
}
void smallest(int a,int b,int c)
{
	if(a<b && a<c)
	{
		printf("a is smallest");
	}
	else if(b<a && b<c)
	{
		printf("b is smallest");
	}
	else
	{
		printf("c is smallest");
	}
		
}




