#include<iostream>
using namespace std;
class student{
	private:
		double *marks;
	public:
		student(double m){
			marks= new double;
			*marks=m;
			cout<<"Marks of the student is: "<<*marks<<endl;
		}
		~student(){
			delete marks;
		}
};
int main(){
	double m;
	cout<<"Enter the marks of the student: ";
	cin>>m;
	student s1(m);
	return 0;
}
