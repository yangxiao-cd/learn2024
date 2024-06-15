#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double x,y;
	long long a,b,i,j;
	cout<<"请输入一个纯小数："<<endl;
	do{
		cout<<"x=";
		cin>>x; 
	}while(x>=1||x<=0);
		a=1; 	y=x;
		cout<<"y="<<y<<endl;
	while(fabs(y-(int)y)>1e-10){
		a*=10;
		y=x*a;
	}
		cout<<"y="<<y<<endl;
	cout<<"a="<<a<<endl;
	b=y;
	cout<<b<<"/"<<a<<endl;
	for(i=b;i>=1;i--){
		if(b%i==0&&a%i==0){
			j=i;
			break;
		}
	}
	cout<<"最简分数为："; 
	cout<<b/j<<"/"<<a/j<<endl;
	return 0; 
}

