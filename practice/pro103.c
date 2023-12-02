#include <stdio.h>

int main()
{
    int n;
    printf("n:");
    scanf("%d",&n);
	int i;
    int arr1[n],arr2[n],arr[n];
    printf("for arr1:");
    for(i=0;i<n;i++)
	{
        scanf("%d",&arr1[i]);
    }
    printf("for arr2:");
    for(i=0;i<n;i++)
	{
        scanf("%d",&arr2[i]);
    }
    int sum,num=0;
    for(i=n-1;i>=0;i--)
    {
       sum=arr1[i]+arr2[i]+num;
       
    	if(i!=0)
    	{	 
        	if(sum>=10)
        	{
            	arr[n-i-1]=sum%10;
            	num=sum/10;
        	}
        	else
        	{
          		arr[n-i-1]=sum;
          		num=0;
        	}
    	}
    	else
    	{
        	arr[n-i-1]=sum;
    	}

    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

