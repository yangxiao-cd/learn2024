#include<iostream>
using namespace std;
int main(){
	int x,y,temp,s,i=1;
	cout<<"输入2个去最小公倍数的数：" ;
	cin>>x>>y;
	if(x>y){
		temp=x;
		x=y;
		y=temp;
	}
	
	s=y*i; 
	while(s%x!=0){
		i++;
		s=y*i; 
	}
	cout<<"最小公倍数为" <<s<<endl;
	return 0; 
}
