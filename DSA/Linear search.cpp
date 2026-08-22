#include<iostream>
using namespace std;
int main(){
	int a[30],n,i,key,found=0;
	cout<<"Enter the no. of elements: ";
	cin>>n;
	cout<<"Enter the elemnts of array"<<endl;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Enter the elements to search: ";
	cin>>key;
	for(i=0;i<n;i++){
		if(a[i]==key){
			cout<<"Element is found at position "<<i+1<<endl;
			found=1;
			break;
		}
	}
	if(found==0){
		cout<<"Element not found"<<endl;
	}
	return 0;
}
