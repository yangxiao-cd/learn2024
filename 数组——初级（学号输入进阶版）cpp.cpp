#include<iostream>
#include<iomanip>	
using namespace std;
int main(){
	int a[6],n,i;
	for(i=1;i<=5;i++){
		cout<<i<<"�ųɼ�";
		cin>>a[i]; 
	}
	cout<<"����ѧ��1~5��";
	cin>>n;
	if(n>=1&&n<=5){
		cout<<a[n];
	}else{
		cout<<"�����ѧ�Ų����ڣ�" ;
	}
	
	return 0; 
	}

