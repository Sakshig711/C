#include<stdio.h>
struct number myfun(struct number s1, struct number s2);
struct number
{
	int x,y;	
};
int main()
{
	struct number t1,t2,t3;
	puts("Enter the numbers = ");
	scanf("%d%d%d%d",&t1.x,&t1.y,&t2.x,&t2.y);
	t3 = myfun(t1,t2);
	printf("x addition=%d\ny additon =%d",t3.x,t3.y);

 	return 0;
}
struct number myfun(struct number s1, struct number s2)
{
	struct number m1;
	m1.x=s1.x+s2.x;
	m1.y=s1.y+s2.y;
	return m1;
}


