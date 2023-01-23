#include<iostream>
#include<fstream>
#include<stdio.h> 
#include<stdlib.h> 
#define CLRSCR  system(“clear”);  // We seeked some help from internet to get this clear screen function  
using namespace std;
void show_all_books(){
	ifstream book;
	string data;
	book.open("allbooks");

	if ( book.is_open() ) 
{
    while ( book ) 
    { 
    	getline (book, data);
        cout << data<<endl;
    }
}
 	else {
 	cout<<"Record could not be opened."<<endl;	
	}   
}
void new_book(){
	cout<<"  Adding new Book in the record"<<endl;
	cout<<"\n\n Note : Avoid use of space while entering data. \n\n "<<endl;
	string name, publ, issn;
	float cost;
	int sr;
	cout<<"Enter the SR number of the number : ";
	cin>>sr;
	cout<<"Enter the name of the book : ";
	cin>>name;
	cout<<"Enter the name of the publisher : ";
	cin>>publ;
	cout<<"Enter the ISSN : ";
	cin>>issn;
	cout<<"Enter the cost of the book : ";
	cin>>cost;
	ofstream bookout;
    ifstream bookin;
    bookin.open("allbooks");
    bookout.open ("allbooks",ios::app);
    if(bookin.is_open()){
   	cout<<endl;
	bookout<<" "<<endl;
	bookout<<"SR of the book : "		<<sr<<endl;
	bookout<<"Name of the book : "		<<name<<endl;
	bookout<<"Publisher of the book : "<<publ<<endl;
	bookout<<"The ISSN of the books : "<<issn<<endl;
	bookout<<"Cost of the book : "		<<cost<<endl;
	bookout<<endl;
	bookout<<"Record entered successfully."<<endl;
	bookout.close();
  }
    bookin.close();
    bookout.close();
}
void issue_book(){
	cout<<"  Issuing a Book to a student"<<endl;
	cout<<"\n\n Note : Avoid use of space while entering data. \n\n "<<endl;
	string stname, section, bookname;
	int rollno;
	cout<<"Enter the name of the student : ";
	cin>>stname;
	cout<<endl;
	ifstream student;
	student.open(stname);

	if ( student.is_open() ) 
{
	cout<<endl;
    cout<<"You have already borrowed a book so please return that book and get "<<endl;
	cout<<"your name removed from the borrower list if you want to get a new one."<<endl;
}
	else{
	cout<<"Enter the roll number of the student : ";
	cin>>rollno;
	cout<<"Enter the name of the book that is being issued : ";
	cin>>bookname;
	ofstream newstudent(stname);
	newstudent<<"Name of the student : "<<stname<<endl;
	newstudent<<"Roll Number of the student : "<<rollno<<endl;
	newstudent<<"Book issued : "<<bookname<<endl;
	newstudent.close();
	cout<<endl;
	cout<<"Book issued successfully."<<endl;
}
}
void search_student(){
	cout<<"  Searching for a student in the record"<<endl;
	cout<<"\n\n Note : Avoid use of space while entering data. \n\n "<<endl;
	ifstream student;
	string data;
	string studentname;
	cout<<"Enter name of the Student whose record you want : ";
	cin >> studentname;
	cout<<endl;
	student.open(studentname);

	if ( student.is_open() ) 
{
    while ( student ) 
    { 
    getline (student, data);
    cout << data<<endl;
    }
}
	else{
		cout<<"Student not found in the record."<<endl;
	}
}
void remove_name()        //We seeked some help from internet to get this file removing function
{
	char name[20];
	cout<<"Enter the name that you want to remove from the borrower list : ";
	cin>>name;
	remove(name);
	cout<<endl;
	cout<<"Name removed from the list sucessfully."<<endl;
}
char ask()
{
	char ch;
	cout<<endl;
	cout<<"Do you want to continue (y or n)? : ";
	cin>>ch;
	if(ch=='n'){
	exit(0);
	}
	return ch;
}
int main()
{
	char choice; 
	string anykey;
	do
{	
	system ("CLS");
	cout<<"	Library Management 	"<<endl;
	cout<<endl;
	cout<<"Enter the any of the followig choice :"  	<<endl;
	cout<<"1. Show the details of all books."     		 <<endl;
	cout<<"2. Enter a new book in the record."    		<<endl;
	cout<<"3. Issue a book to a student."                <<endl;
	cout<<"4. Show the student detail record."    		<<endl;
	cout<<"5. Remove a name from the book borrower list."<<endl;
	cout<<"6. Exit"<<endl;
	cout<<endl;
	cout<<"Enter your choice : ";
	cin>>choice;
	switch(choice){
	case'1':
	{
	system ("CLS");
	show_all_books();
	ask();
	break;		
	}
	case'2':
	{
	system ("CLS");
	new_book();
	ask();
	break;	
	}
	case'3':
	{
	system ("CLS");
	issue_book();
	ask();
	break;		
	}
	case'4':
	{
	system ("CLS");
	search_student();
	ask();
	break;
	}
	case'5':
	{
	system ("CLS");
	remove_name();
	ask();
	break;	
	}
	case'6':
	{
	system ("CLS");
	exit(0);
	break;	
	}
	default: 
	system ("CLS");
	cout<<"\n\n Invalid Choice. Press any key to continue..";
	cin>>anykey;
}
	}
	while(choice!='6');
	return 0;
}
