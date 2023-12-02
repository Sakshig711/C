/*creat runtime mrmory for 6 fraction values*/
#include<stdio.h>

int main()
{
	float *p;
	int i,sum=0;
	p=(float *) malloc (6*sizeof(float));
	puts("Enter 6 fraction values = ");
	for (i=0; i<=5; i++)
	{
		scanf("%f",p+i);
	}
	for (i=0; i<=5; i++)
	{
		sum=sum+*(p+i);
    }
    printf("Sum=%d",sum);
 	return 0;
}

