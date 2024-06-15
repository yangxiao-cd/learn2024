#include<iostream>
using namespace std;
int main(){
	//			continue       break
	long long i,n;
	bool flag;
	cout<<"求质数的数：";
	cin>>n;
	flag=true;

	for(i=2;i<n;i++) {
		cout<<i<<endl;
		if(n%i==0){
			flag=false;
			break;
		}
	}
	
	if(flag){
		cout<<"是质数";
	} else{
		cout<<"不是质数";
	}



	return 0; 
}
