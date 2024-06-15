#include<iostream>
using namespace std;
int main(){
	long long num,n,m;
	cout<<"请输入1个求是否为回文数的数：";
	cin>>num;
	m=0;
	n=num;
	for(;n>0;){
		m=m*10+n%10;
		n=n/10;
	}
	if(num==m){
		cout<<num<<"是一个回文数";
	}else{
		cout<<num<<"不是一个回文数";
	}
	return 0; 
}
