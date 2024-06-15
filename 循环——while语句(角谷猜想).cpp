#include<iostream>
using namespace std;
int main(){
	long long x,count;
	cout<<"x=";
	cin>>x;
	while(x!=1){
		cout<<x<<"------>";
		if(x%2==1){
			x=x*3+1;
		}else{
			x/=2;
		}
		count++;
	}
	cout<<x<<endl;
	cout<<"²½Êý£º" <<count<<endl;
	return 0; 
}
