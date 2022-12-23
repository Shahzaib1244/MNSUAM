#include<iostream>
#include<cmath>
using namespace std;
int sum(int a,int b)
{
return (a+b);
}
int diff(int a,int b)
{
return (a-b);
}
int prod(int a,int b)
{
return (a*b);
}
float quotient(float a, float b)
{
return (a/b);
} 
float mode(float a,float b)
{
return fmod(a,b);
}
float logarithm(float c)
{
return log(c);
}
float sqrot(float d)
{
return sqrt(d);
}
int main()
{
float a,b,c,d,num;
cout<<"Enter_your_First_Number_";
cin>>a;
cout<<"Enter_Your_Second_Number_";
cin>>b;
num=sum(a,b);
cout<<"The_Sum_of_Two_Number_is_"<<num<<endl;
num=diff(a,b);
cout<<"The_Diffrence_of_two_Number_is_"<<num<<endl;
num=prod(a,b);
cout<<"The_Product_of_Two_Numbers_is_"<<num<<endl;
num=quotient(a,b);
cout<<"The_Division_Of_two_Numbers_is_"<<num<<endl;
num=mode(a,b);
cout<<"The_mode_OF_Two_Number_Is_"<<num<<endl;
cout<<"Enter_Your_Number_For_Logarithm_";
cin>>c;
num=logarithm(c);
cout<<"The_Logarithm_of_" <<c<<"_is_"<<num<<endl;
cout<<"Enter_Your_Number_For_Squar_root_";
cin>>d;
num=sqrot(d);
cout<<"The_squar-root_of_"<<d<<"_is_"<<num;
return 0;
}    