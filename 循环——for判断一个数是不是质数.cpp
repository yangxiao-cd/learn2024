#include<iostream>
using namespace std;
int main(){
	//			continue       break
	long long i,n;
	bool flag;
	cout<<"������������";
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
		cout<<"������";
	} else{
		cout<<"��������";
	}



	return 0; 
}
