#include<iostream>
using namespace std;
int main(){
	int n,i;
	double n1,n2;
	n=1;
	n1=n-0.01;
	n2=n+0.01;
	cout<<"    "<<n1;
	cout<<"    "<<n2<<endl;
	i=1 ;
	while(i<=15){
		n1*=n1;
		n2*=n2;
		cout<<i<<"    "<<n1<<"    "<<n2<<endl;
		i++;
	}
	return 0; 
}		
