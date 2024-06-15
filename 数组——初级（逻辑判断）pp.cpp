#include<iostream>
#include<iomanip>	
using namespace std;
int main(){ 
	int a,b,c,d;
	bool h[4];
	for(a=1;a<=4;a++){
		for(b=1;b<=4;b++){
			for(c=1;c<=4;c++){
				for(d=1;d<=4;d++){
					if(a*b*c*d==24){
						h[0]=((a==1)+(b==4)+(c==3)+(d==2)==2);
						h[1]=((b==1)+(a==4)+(c==2)+(d==3)==2);
						h[2]=((b==4)+(a==3)==1);
						h[3]=((a==1)+(d==4)+(b==3)+(c==2)==2);
						if(h[0]&&h[1]&&h[2]&&h[3]){
							cout<<"a:"<<a<<endl;
							cout<<"b:"<<b<<endl;
							cout<<"c:"<<c<<endl;
							cout<<"d:"<<d<<endl;
							break;
						}
					}
				}
			}
		}
	}
	return 0; 
	}
