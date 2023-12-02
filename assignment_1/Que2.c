/*Scan marks of three subjects of a student.Print their average.
*/

#include<stdio.h>

int main()
{
	//x,y and z are the marks of subjects.
	int x,y,z;
	float avg;
	printf("Enter the marks = ");
	scanf("%d%d%d",&x,&y,&z);
	avg=(x+y+z)/3;
	printf("average = %f",avg);


 	return 0;
}

