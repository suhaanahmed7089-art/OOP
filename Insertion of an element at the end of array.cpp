#include<iostream>
using namespace std;
int main()
{
	int i,pos,n,a[30],element;
	cout<<"Enter the no. of elements: ";
	cin>>n;
	cout<<"\nEnter the elements of array:\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	pos=n+1;
	cout<<"\nEnter the element to insert: ";
	cin>>element;
	a[pos-1]=element;
	cout<<"\nArray after the insertion of the element:\n";
	for(i=0;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
