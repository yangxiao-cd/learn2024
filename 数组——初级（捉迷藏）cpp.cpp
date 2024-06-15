#include<iostream>
#include<iomanip>	
using namespace std;
int main(){
	bool a[10] ;
	int c,i;
	for(i=1;i<=10	;i++)
		a[i]=true;
	i=10;
	a[i]=false;
	c=1;
	while(c<=1000){
		i=(i+c)%10;
		if(i==0)i=10;
		a[i]=false;
		c++;
	}
	for(i=1;i<=10;i++){
		if(a[i])cout<<i<<endl;
	}
	return 0; 
	}

