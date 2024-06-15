#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int time,count,x,y,z;
	bool flag;
	do{
		flag=0;time++;
	if(x<9){
		flag=1;x++;	 
	}
	if(y<9&&time%2==0){
		flag=1;y++;
	}
	if(z<9&&time%4==0){
		flag=1;z++;
	}
	if(flag)count++;
	}while(x+y+z<9*3);
	cout<<count<<endl; 
	return 0; 
}

