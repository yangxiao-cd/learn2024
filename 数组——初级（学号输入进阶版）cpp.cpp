#include<iostream>
#include<iomanip>	
using namespace std;
int main(){
	int a[6],n,i;
	for(i=1;i<=5;i++){
		cout<<i<<"号成绩";
		cin>>a[i]; 
	}
	cout<<"输入学号1~5：";
	cin>>n;
	if(n>=1&&n<=5){
		cout<<a[n];
	}else{
		cout<<"输入的学号不存在！" ;
	}
	
	return 0; 
	}

