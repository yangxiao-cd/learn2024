#include<iostream>
#include<iomanip> 
using namespace std;
int main()
{
 int a,b,c;
 a=213;
 b=21;
 c=a-b;
 cout<<setw(5)<<a<<endl;
 cout<<setw(2)<<"-"<<setw(3)<<b<<endl;
 cout<<"___________"<<endl;
 cout<<setw(5)<<c<<endl;
} 
