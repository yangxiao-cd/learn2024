#include<iostream>
#include<iomanip>	
using namespace std;
int main(){
	int j,i,a[5],k;
	cout<<"��5������"; 
	for(i=0;i<5;i++){			//������� 
		cin>>a[i];
	}
	for(i=0;i<5;i++){			//���Ĵ��� 
		for(j=0;j<5-i;j++){
			if(a[j]<a[j+1]){
				k=a[j];
				a[j]=a[j+1];
				a[j+1]=k;
			}
		}
	}
	for(i=0;i<5;i++){
		cout<<a[i]<<"	";			
	}
	return 0; 
	}
