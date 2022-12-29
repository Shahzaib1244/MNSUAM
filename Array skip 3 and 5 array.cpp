#include<iostream>
using namespace std;
int main()
{
	int arr[10],i,sum=0;
	cout<<"Enter your ten numbers = "<<endl;
	for(i=0;i<10;i++)
{
	cin>>arr[i];
	}
     for(i=0;i<10;i++)
{
   if(i==3||i==5)
   continue;
   sum=sum+arr[i];
}
 cout<<"the sum of elements is = "<<sum<<endl;
 cout<<"the program in reverse manner"<<endl;
 {
 int arr[10];
 for(int k=0;k<=9;k++)
 cin>>arr[k];
 cout<<"In reverse manner"<<endl;
 for(int k=9;k>0;k--)
 cout<<arr[k]<<endl;
 return 0;
}
}
