/*13)Scan marks of 3 subjects of a student from ClassTeacher.Print average of these 3 subjects.
Ask ClassTeacher if he/she wants to enter marks of one more student.If classTeacher enters 1,repeat the 
process else stop the process.*/

#include<stdio.h>

int main()
{
	int a,b,c,i;
	float avg;
	while (1)
	{
	
		printf("\nEnter the marks of 3 subject = ");
		scanf("%d%d%d",&a,&b,&c);
	
		avg=(a+b+c)/3;
		printf("\nAverage =%f",avg);
	
		int choice;
		printf("\nEnter 1 for repeat ");
		scanf("%d",&choice);
		if(choice==1)
		{
			continue;
		}
		else 
		{
			break;	
		}
	}

 	return 0;
}

