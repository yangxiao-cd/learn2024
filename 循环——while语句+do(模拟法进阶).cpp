#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n=0,num=0,nike=0,glair=0;
	do{
		nike++;
	if(nike>20)nike=1;
		glair++;	 
	if(glair>30)glair=1;
		glair++;
		
	if(nike==glair)num++;
		n++;
	}
	while(n<1000);
	cout<<num<<endl; 
	return 0; 
}

