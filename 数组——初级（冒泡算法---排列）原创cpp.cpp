#include<iostream>
#include<iomanip>	
using namespace std;
int main(){
	int j,i,a[5],k;
	cout<<"输5个数："; 
	for(i=0;i<5;i++){			//输入代码 
		cin>>a[i];
	}
	for(i=0;i<5;i++){			//核心代码 
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
