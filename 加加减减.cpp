#include<iostream>
using namespace std;
int main()
{
	int x=666,y=888,a=0,b=0;
	int a=10,b=20; 
	int a,b;
	a=10;
	b=20;
	count << "a="<<a; 
	a=x++;
	cout<<a<<endl;
	cout<<x<<endl;
	a=++x;
	cout<<a<<endl;
	cout<<x<<endl;
	
	b=y--;
	cout<<b<<endl;
	cout<<y<<endl;
	b=--y;
	cout<<b<<endl;
	cout<<y<<endl;
	
	int sum = 0;
	for(int j=0;j<100000000;j++ ){
		sum = sum +j; //ÀÛ¼Ó 
	}
	cout<<sum<<endl;
}
