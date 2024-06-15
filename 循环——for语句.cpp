#include<iostream>
#include "windows.h"
using namespace std;
int main(){
	int i,sum;
	sum=0;
	for(i=1;i<=999999999;i++){
		sum=sum+i;
		cout<<i;
		//if(i%10==1){
		//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);	
	//	}
		if(i%10==2){
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);	
	//	}
	//	if(i%10==4){
	//		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
		}
		
	cout<<i;//<<endl//;
	}
	cout<<"ÌìºÚÁË¡£"<<sum<<endl;
	return 0; 
} 
