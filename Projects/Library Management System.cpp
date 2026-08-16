#include<iostream>
#include<vector>
#include<iomanip>
#include<stdexcept>
using namespace std;
class book
{
	public:
		string title;
		string author;
		int book_id;
		book(int id,string a,string t)
		{
			book_id = id;
			author = a;
			title = t;
		}
};
class library
{
	private:
		vector<book> books;
	public:
		void input()
		{
		string title;
		string author;
		int book_id;
			cin.ignore();
			cout<<endl;
			cout<<"Enter book name: ";
			getline(cin,title);
			cout<<"\nEnter the author name: ";
			getline(cin,author);
			cout<<"\nEnter the book id: ";
			cin>>book_id;
			books.push_back(book(book_id,title,author));
			cout<<"Book added successfully"<<endl;
		}
		
		void display()
		{
			if(books.empty())
			{
				cout<<"\nNo Books available"<<endl;
				return;
			}
			cout<<"\n=====Available books====="<<endl;;
			cout<<setw(10)<<"Book id"<<setw(25)<<"Author"<<setw(25)<<"Title"<<endl;
			cout<<"\n=========================\n";
			for(const auto& book: books)
			{
				cout<<setw(10)<<book.book_id
					<<setw(25)<<book.title
					<<setw(25)<<book.author<<endl;
			}
			cout<<"============================"<<endl;
		}
		void search()
		{
			int id;
			cout<<"Enter the book Id: ";
			cin>>id;
			bool found=false;
			for(int i=0;i<books.size();i++)
			{
				if(id==books[i].book_id)
				{
					cout<<"\nBook found!! "<<endl;
					cout<<"ID: "<<books[i].book_id<<endl;
					cout<<"Title: "<<books[i].title<<endl;
					cout<<"Author: "<<books[i].author<<endl;
					found=true;
					break;
				}
			}
			if(found!=true)
			{
				cout<<"\nBook not found!!"<<endl;
			}
		}
	};
int main()
{
	library lib;
	while(true)
	{
	try{
	int choice;
	cout<<"==========Library Management System=========="<<endl;
	cout<<"1. Add a book."<<endl;
	cout<<"2. Display all books."<<endl;
	cout<<"3. Search a book."<<endl;
	cout<<"4, Exit."<<endl;
	cout<<"Enter a choice: ";
	cin>>choice;
	if(choice==1){
	lib.input();
	}
	else if(choice==2)
	{
	lib.display();
	}
	else if(choice==3)
	{
		lib.search();
	}
	else if(choice==4)
	{
		cout<<"program exited successfully"<<endl;
		break;
	}
	else
	{
		throw out_of_range("Invalid option, please enter a choice between 1-4");
	}
}
	catch(const invalid_argument& e)
	{
		cout<<"\n[Input Error]: "<<e.what()<<endl;
	}
	catch(const out_of_range& e)
	{
		cout<<"\n[Range Error]: "<<e.what()<<endl;
	}
	catch(const runtime_error& e)
	{
		cout<<"[Runtime Error]: "<<e.what()<<endl;
	}
	catch(...)
	{
		cout<<"[Unknown Error]: Something went wrong"<<endl;
	}
}
return 0;
}
