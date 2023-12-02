/*3.Write menu driven program for 4 arithmetic operations of 2 integers.
After each operation ask user if he wants to repeat or not.
*/
void myfun();
#include<stdio.h>
int main()
{
	int x;
	myfun();
	

 	return 0;
}
void myfun()
{
	int a,b,n,x;
	float dv;
	printf("\nEnter the numbers = ");
	scanf("%d%d",&a,&b);
	puts("\npress\n1=addition\n2=substraction\n3=multiplication\n4=division");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1: printf("Addition=%d",a+b);
				break;
			
		case 2: printf("substraction=%d",a-b);
				break;
			
		case 3: printf("multiplication=%d",a*b);
				break;
			
		case 4: dv=a/b;
				printf("divition=%f",dv);
				break;
			
		default: printf("\ninvalid number");
	
	}
		printf("\nEnter the choise yes=1 and no=2 = ");
		scanf("%d",&x);
		if(x==1)
		{
			myfun();
		}
		else
		{
			return;
		}
			
}

