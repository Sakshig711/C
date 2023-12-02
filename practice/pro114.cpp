#include<iostream>
using namespace std;

#define max 16
class Stack
{
    public:
        int data[max];
        int top;
    Stack()
    {
        top=-1;
    }
    void push(int x)
    {
        if(top==max-1)
        {
            cout<<"\ncan't push";
        }
        else
        {
            top++;
            data[top]=x;
        }
    }
    int pop()
    {
        if(top==-1)
        {
            cout<<"array is empty";
            return 0;
        }
        else
        {
        	int x;
            x = data[top];
            top--;
            return x;
        }
    }
    int empty()
    {
    	if(top==-1)
    	{
    		return 1;
		}
		else
		{
			return 0;
		}
	}
};

int main()
{
	Stack stk;
	int num,rem=0,x;
	cout<<"Enter a number = ";
	cin>>num;
	while(num!=0)
	{
		rem=num%2;
		num=num/2;
		stk.push(rem);
	}
	while(stk.empty())
	{
		x = stk.pop();
		cout<<x<<endl;
	}


 	return 0;
}

