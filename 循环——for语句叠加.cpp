#include<iostream>
using namespace std;
int main(){
	int i,j;
	for(i=100;i<=200;i++){
		bool flag=true;
		for(j=2;j<=i-1;j++){
			if(i%j==0){
				flag=false;		 
			}
		}
		
		if(flag){
			cout<<i<<"ÖÊÊý"<<endl; 
		}
	}
	return 0; 
}
