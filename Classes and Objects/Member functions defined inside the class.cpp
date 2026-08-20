#include<iostream>
using namespace std;
class employee
{
	public:
		string name;
		int employee_id;
		string department;
		
		void input()
		{
			cout<<"Enter the name of the employee: ";
			cin>>name;
			cout<<"Enter the employee Id: ";
			cin>>employee_id;
			cout<<"Enter the employee department: ";
			cin>>department;
		}
		void display()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"Employee Id: "<<employee_id<<endl;
			cout<<"Department: "<<department<<endl;
		}
}s1;
int main()
{
	s1.input();
	s1.display();
	return 0;
}
