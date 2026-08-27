#include<iostream>
using namespace std;
class student{
	public:
		string name;
		int roll;
		explicit student(string n,int r){
			name=n;
			roll=r;
			cout<<"Name of the student is: "<<n<<endl;
			cout<<"Roll no. of the student is: "<<r<<endl;
		}
};
int main(){
	string n;
	int r;
	cout<<"Enter the name of the student: ";
	getline(cin,n);
	cout<<"Enter the roll no. of student: ";
	cin>>r;
	student s1(n,r);
	return 0;
}
