#include<iostream>
#include<iomanip>	
using namespace std;
int main(){ 
	int a[30],i=0,num=0,k=0;
	for(;i<30;i++){
		a[i]=0;
	}
	i=0;
	while(num<15){
		if(i>29)i=0;
		if(a[i]==0)k++;
		if(k==9){
			a[i]=1;		k=0;	num++;
		}
	i++;
	}
	cout<<"¹ÇÍ·µÄÎ»ÖÃ£º";
	for(i=0;i<=29;i++){
		if(a[i]==0){
			cout<<i+1<<"	";
		}
	}
	return 0; 
	}
