#include<iostream>
using namespace std;
int main(){
	long long max,x;
	int i;
	cout<<"�������1������";
	cin>>x;
	max=x;
	i=2; 
	for(;i<=10;i++){
		cout<<"�������"<<i<<"������"<<endl;
		cin>>x;
		if(x>max)max=x;
	}
	cout<<"��������"<<max;
	return 0; 
}
