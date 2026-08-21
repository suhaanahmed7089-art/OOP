#include<iostream>
using namespace std;
class queue{
	int front,rear,q[20];
	public:
		queue(){
			front=-1;
			rear=-1;
		}
		void insert()
		{
			int value;
			if(rear==19)
			{
				cout<<"Queue is full"<<endl;
			}
			
			cout<<"Enter the value: ";
			cin>>value;
			if(front=-1)
			{
				front=0;
			}
				
			rear++;
			q[rear]=value;
			cout<<value<<" is inserted in queue"<<endl;
		}
		void deletion()
		{
			if(front==-1||front>rear)
			{
				cout<<"Queue is empty"<<endl;
			}
			else
			{
				cout<<q[front]<<" is deleted from queue"<<endl;
				front++;
			}
		}
		void display()
		{
			if(front==-1||front>rear)
			{
				cout<<"Queue is empty"<<endl;
			}
			else if(rear==19)
			{
				cout<<"Queue is full"<<endl;
			}
			else
			{
				for(int i=front;i<=rear;i++)
				{
					cout<<q[i]<<" ";
				}
				cout<<endl;
			}
		}
};
int main()
{
	queue q1;
	int choice;
	while(true)
	{
		cout<<"1.Insert an element"<<endl;
		cout<<"2.Delete an element"<<endl;
		cout<<"3.Display all element"<<endl;
		cout<<"4.Exit the program"<<endl;
		
		cout<<"Enter your choice: ";
		cin>>choice;
		if(choice==1)
		{
			q1.insert();
		}
		else if(choice==2)
		{
			q1.deletion();
		}
		else if(choice==3)
		{
			q1.display();
		}
		else if(choice==4)
		{
			cout<<"Program exited successfully"<<endl;
			break;
		}
		else
		{
			cout<<"Invalid choice. Enter a choice between(1-4)"<<endl;
		}
	}
	return 0;
}
