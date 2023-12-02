#include<stdio.h>


int main()
{
	int n,m;
    cout<<"enter n and m:";
    cin>>n>>m;

    int arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int no[n];
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<m;j++){
            if(arr[i][j]==true){
                 count=m-j;
                 break;
            }
        }
    no[i]=count;
    }

int max=no[0];
    for(int i=1;i<n;i++){
        if(no[i]>max){
            max=no[i];
        }
        
    }

    for(int i=0;i<n;i++){
        if(no[i]==max){
    cout<<"max no of one is found in "<<i+1;}
    cout<<endl;
}


    return 0;
}

