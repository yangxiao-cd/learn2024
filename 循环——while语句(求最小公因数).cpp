#include<iostream>
using namespace std;
int main(){
	long long m,n,r;
	cout<<"����2��ȥ��С������������" ;
	cin>>m>>n;
	r=m%n;
	while(r!=0){
		m=n;
		n=r;
		r=m%n;
	}
	cout<<"��С������Ϊ" <<n<<endl;
	return 0; 
}
