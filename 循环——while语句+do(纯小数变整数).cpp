#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double x,y;
	long long num; 
	do{
	cout<<"������һ����С����"<<endl; 
	cin>>x;
	}while(x>=1||x<=0);
	num=1;
	do{
		num*=10;
		y=x*num;
	}while(fabs(y-(int)y)>1e-9);
	cout<<int(y)<<endl;
	return 0; 
}

