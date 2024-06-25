#include<iostream>
#include<iomanip>	
using namespace std;
int main(){
	int a[4],ans,i;
	string t[4];
	t[0]="1,2,3,4,5,6,7";
	t[1]="1,3,5,7";
	t[2]="2,3,6,7";
	t[3]="4,5,6,7";
	cout<<"请在下列数中选择并记住一个数："<<endl;
	cout<<t[0]<<endl;
	system("pause");
	for(i=1;i<=3;i++){
		system("cls");
		cout<<i<<"这个数在下列数中是否存在?是：1  否：0"<<endl; 
		cout<<t[i]<<endl;
		do{
			cin>>a[i];
		}while(a[i]<0||a[i]>1);
	}
	ans=4*a[3]+2*a[2]+a[1];
		cout<<"输入的学号不存在！" ;
		system("cls");
		cout<<"这个数是";
		cout<<ans<<endl; 
	return 0; 
	}

