#include<iostream>
using namespace std;
class student{
	public:
		string name;
		string course;
		int roll;
		
		//Default Constructer
		student(){
			name="Sumit Kumar";
			course="BTech";
			roll=2534209;
			cout<<"Using default constructor"<<endl;
			cout<<"\nName: "<<name<<endl;
			cout<<"Course: "<<course<<endl;
			cout<<"Roll no.: "<<roll<<endl;
			cout<<endl;
		}
		
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
	student s1;
	student s2("Sumit Kumar", "BTech", 2534209);
	return 0;
}
