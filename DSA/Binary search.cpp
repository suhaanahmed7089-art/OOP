#include<iostream>
using namespace std;
int main(){
	int a[30],n,i,j,key,found=0,low=0,mid,high,swap;
	cout<<"Enter the no. of elements: ";
	cin>>n;
	cout<<"Enter the elements of array"<<endl;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				swap=a[j];
				a[j]=a[j+1];
				a[j+1]=swap;
			}
		}
	}
	cout<<"Sorted elements of array are"<<endl;
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<"Enter the element to search: ";
	cin>>key;
	high=n-1;
	while(low<high){
		mid=(low+high)/2;
		if(a[mid]==key){
			cout<<"Element is found at position "<<mid+1<<endl;
			found=1;
			break;
		}
		else if(a[mid]>key){
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	if(found==0){
		cout<<"Element not found"<<endl;
	}
	return 0;
}
