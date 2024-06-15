#include<iostream>
using namespace std;
int main(){
	int i;
	for(i=1;i<=999999999;i++){
		cout<<i<<endl;
		if(i%2==0){
			cout<<"¶£¶£";
		}
		if(i%3==0){
			cout<<"îõîõ";
		}
		if(i%2==0||i%3==0){
			cout<<endl;
		}
	}
	return 0; 
}
