#include<iostream>
using namespace std;
class student{
	public:
		string name;
		string course;
		int roll;
//Parameterised Constructor
		student(string n, string c, int r){
			name=n;
			course=c;
			roll=r;
			cout<<"Using parameterised constructor"<<endl;
			cout<<"\nName: "<<name<<endl;
			cout<<"Course: "<<course<<endl;
			cout<<"Roll no.: "<<roll<<endl;
			cout<<endl;
		}
};
int main()
{
	student s1("Suhaan Ahmed", "BTech", 2534203);
	return 0;
}
