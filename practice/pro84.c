#include<stdio.h>
struct number
{
	int x=6;
	int y=8;
};
int main()
{
	struct number t1;
	//x=5,y=7;
	puts("Enter the numbers = ");
	scanf("%d%d",&t1.x,&t1.y);
	printf("%d %d",t1.x,t1.y);

 	return 0;
}

