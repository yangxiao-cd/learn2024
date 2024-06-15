#include<iostream>
using namespace std;
int main(){
	long long n; 
	int a,sum=0;
	cout<<"请输入求各个数位之和的数："; 
	cin>>n;
	do{
	a=n%10;
	sum+=a;
	n=n/10;
	}while(n!=0);
	cout<<"各个数位之和:"<<sum<<endl; 
	
	return 0; 
}		
