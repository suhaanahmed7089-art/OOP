#include<iostream>
using namespace std;
class student{
	public:
		string name;
		string course;
		int roll;
	
		void getData();
		void displayData();
};
void student::getData(){
	cout<<"Enter the name of the student: ";
	getline(cin,name);
	cout<<"Enter the course taken by the student: ";
	getline(cin,course);
	cout<<"Enter the roll no. of the student: ";
	cin>>roll;
}
void student::displayData(){
	cout<<"\n----Student Details----"<<endl;
	cout<<"\nName: "<<name<<endl;
	cout<<"Course: "<<course<<endl;
	cout<<"Roll no.: "<<roll<<endl;
}
int main()
{
	student s1;
	s1.getData();
	s1.displayData();
	return 0;
}
