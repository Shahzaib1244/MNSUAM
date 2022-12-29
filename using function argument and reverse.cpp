#include <iostream>
using namespace std;
void function1()
{
//function with no argument and no return value
int n;
cout<<"Enter your Number = ";
cin>>n;
if (n%2==0)
cout<<"Even";
else
cout<<"Odd";
}
//function with no Argument but return a value
int function2()
{
int n;
cout<<"Enter_Your_Number = ";
cin>>n;
return n;
}
//Function with Argument passed but no return value
void function3(int n)
{
if(n%2==0)
cout<<"Even";
else
cout<<"Odd";
}
// Function with argument pass and return a value
int function4(int n)    
{
if(n%2==0)
return 1;
else
return 2;
}
int main()
{
int choice ,n,x;
cout<<"Enter 1 For Function With no argument and return no value \n";
cout<<"Enter 2 For Function With no argument but return a value \n";
cout<<"Enter 3 For Function With Argument but no return value \n";
cout<<"Enter 4 For Function With Argument and return a Value\n";
cout<<"Enter_Your_choice = ";
cin>>choice;
switch(choice)
{
case 1:
cout<<"Function with no argument and no return value\n";
function1();
return 0;
break;
case 2:
cout<<"Function With No Arguments but return a value\n";
int n;
n=function2();
if(n%2==0)
cout<<"Even";
else
cout<<"Odd";
return 0;
break;
case 3:
cout<<"Function With Argument but no return Value\n";
cout<<"Enter Your your Number = ";
cin>>n;
function3(n);
return 0;
break;
case 4:
cout<<"Function With Argument and return value\n";
cout<<"Enter Your Number = "; 
cin>>n;
x=function4(n);
if(x==1)
cout<<"Even";
else 
cout<<"Odd";
return 0;
break;
default:
cout<<"Invalid input";

}
return 0;
}