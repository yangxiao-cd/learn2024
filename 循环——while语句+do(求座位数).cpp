#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int sum,x,p;
	p=1;
	x=15;
	sum=x;
	cout<<p<<"	"<<x;
	cout<<"	"<<sum<<endl;
	do{
	p++;
	x+=2;
	sum+=x;
	cout<<p<<"	"<<x<<"	"<<sum<<endl;
	}while(sum!=312);
	cout<<"���һ�ŵ���λ����"<<x<<endl;
	cout<<"������" <<p<<endl; 
	return 0; 
}

