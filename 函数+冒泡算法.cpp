#include<iostream>	
using namespace std;
int ans,a[5];

int max(int x,int y){
	if(x>y){
		return x;
	}else{
		return y;
	}
}

void man(void){
	for(int i=0;i<5;i++){
		cin>>a[i];
	}
	ans=a[0];
	for(int k=1;k<5;k++){
		ans=max(ans,a[k]);
	}
}

int main(){
	man();
	cout<<ans<<"×î´ó"<<endl;
	return 0; 
	}

