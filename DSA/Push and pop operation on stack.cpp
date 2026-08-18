#include<iostream>
#define MAX 6
using namespace std;
int stack[MAX];
int top=-1;

//Push Operation
void push(){
	int value;
	if(top == MAX-1)
	{
		cout<<"Stack is overflowed!"<<endl;
	}
	else
	{
		cout<<"Enter the element to push into the stack: ";
		cin>>value;
		top++;
		stack[top]=value;
		cout<<value<<" successfully pushed into the stack"<<endl;
	}
}

//Pop Operation
void pop(){
	if(top == -1)
	{
		cout<<"Stack underflow!"<<endl;
	}
	else
	{
		cout<<stack[top]<<" is popped from the stack"<<endl;
		top--;
	}
}
void display(){
	if(top == -1)
	{
		cout<<"Stack is empty"<<endl;
	}
	else
	{
		cout<<"Stack elements: ";
		for(int i=top;i>=0;i--)
		{
			cout<<stack[i]<<" ";
		}
	}
	cout<<endl;
}
int main()
{
	push();
	push();
	push();
	display();
	pop();
	return 0;
}
