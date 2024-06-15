#include<iostream>
using namespace std;
int main(){
	long long m,n,r;
	cout<<"输入2个去最小公因数的数：" ;
	cin>>m>>n;
	r=m%n;
	while(r!=0){
		m=n;
		n=r;
		r=m%n;
	}
	cout<<"最小公因数为" <<n<<endl;
	return 0; 
}
