#include<iostream>
using namespace std;
int main(){
	long long num,n,m;
	cout<<"������1�����Ƿ�Ϊ������������";
	cin>>num;
	m=0;
	n=num;
	for(;n>0;){
		m=m*10+n%10;
		n=n/10;
	}
	if(num==m){
		cout<<num<<"��һ��������";
	}else{
		cout<<num<<"����һ��������";
	}
	return 0; 
}
