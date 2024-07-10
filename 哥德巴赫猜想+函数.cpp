#include<iostream>
#include<iomanip>	
using namespace std;
bool man(int x) {
	if(x<1)return 0; 
	if(x==2)return 1; 
	for(int i=2;i<=x-1;i++){
		if(x%i==0){
			return 0; 
			}	
		}
		return 1; 
}


int main(){
	int i,j;
	for(int i=4;i<=10;i+=2){
		for(j=2;j<i;j++){
			if(man(j)){
				if(man(i-j)){
					cout<<i<<"="<<j<<"+"<<i-j<<endl;
					break; 
				}
			}
		}
		if(i==j){
			cout<<i<<"ÑéÖ¤Ê§°Ü£¡"<<endl;
		}
	}
	return 0; 
	}
