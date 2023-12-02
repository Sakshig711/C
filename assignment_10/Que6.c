#include<stdio.h>
int getvalue(int n);
int add(int a,int b);
int main()
{
	int a,b,ans;
	
	a = getvalue();  //getvalue() scans value for a
	
	b = getvalue();  //getvalue() scans value for b
	
	ans = add(a,b);
	printf("\nAnswer = %d",ans);

 	return 0;
}
int getvalue()
{
	int n;
	printf("Enter the value");
	scanf("%d",&n)
	return n;
}
int add(int a,int b)
{
	return a+b;
}

