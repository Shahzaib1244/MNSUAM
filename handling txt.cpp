#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream myfiles;
myfiles.open("mytext.txt");
myfiles<<"Hi! this is Shahzaib Malik a young boy who loves his Family ";
if(myfiles.is_open())
	{
		cout<<"1st file is created"<<endl;
	}
ofstream myfiles2("mytext2.txt");
myfiles2<<"I LoVE them purely with my soul pleasure.SE";
if(myfiles2.is_open())
	{
		cout<<"2nd file is created"<<endl;
	}
	myfiles.close();
	myfiles2.close();
 {ifstream myfiles("mytext.txt");
 int word=1;
 char ch;
 myfiles.seekg(0,ios::beg);
 while(myfiles)
 {
  myfiles.get(ch);
  if(ch==' '||ch=='\n')
   word++;
 } 
 cout<<"Total Words in 1st file ="<<word<<"\n";
 myfiles.close(); 
}
{

 
 ifstream myfiles2("mytext2.txt");
 int word1=1;
 char ch1;
 myfiles2.seekg(0,ios::beg);
 while(myfiles2)
 {
 	myfiles2.get(ch1);
 	if(ch1==' '||ch1=='\n')
 	word1++;
 }
 
 cout<<"Total Words in 2nd file ="<<word1<<"\n";
 myfiles2.close();
}

 
 return 0;
}