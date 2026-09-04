#include<iostream>
using namespace std;
class student{
	private:
		const int x;
		const int y;
	public:
		student():x(20),y(35){
		}
		student(int a,int b):x(a),y(b){
		}
		void display(){
			cout<<"X: "<<x<<endl;
			cout<<"Y: "<<y<<endl;
		}
};
int main(){
	student s1;
	s1.display();
	student s2(42,65);
	s2.display();
	return 0;
}
