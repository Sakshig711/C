#include<stdio.h>
struct number
{
	int age ;
    float weight;
};
int main()
{
	struct number s1,s2;
	puts("Enter age and weight = ");
	scanf("%d%f",&s1.age,&s1.weight);
	scanf("%d%f",&s2.age,&s2.weight);
	printf("age=%d  weight=%f",s1.age,s1.weight);
	printf("\nage=%d  weight=%f",s2.age,s2.weight);

 	return 0;
}

