#include<iostream>
#include<iomanip>	
using namespace std;
int main(){
	int gongji,muji,xiaoji;
	cout<<setw(5)<<"¹«¼¦"<<setw(5)<<"Ä¸¼¦"<<setw(5)<<"Ð¡¼¦" <<endl; 
	int count=0; 
	int x=0;
	for(gongji=1;gongji<=33;gongji++){//¹«¼¦ 
		for(muji=1;muji<=50;muji++){//Ä¸¼¦ 
			xiaoji=100-	gongji-muji;//Ð¡¼¦ 
			if(gongji*3+muji*2+xiaoji/3.0==100){
					cout<<setw(5)<<gongji<<setw(5)<<muji<<setw(5)<<xiaoji <<endl; 
					x=1;
					continue;
				}
			}
			count++;
		if(x==1){
			break;
		}
	
	}
	
	return 0; 
	}

