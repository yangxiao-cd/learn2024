#include<iostream>
#include<limits> 
using namespace std;
/*本程序实现求平闰年的功能 */ 
int main()
{
	//输出知识点提示 
	cout<<"知识点："<<endl<<"四年一闰" <<endl<<"百年不闰" <<endl<<"四百年再闰"  <<endl<<endl; 
	//开始循环 
	while(true){
		//定义是否是平或闰年 
		bool flag;
		//定义输入的年份 
		int year;
		//定义字符串类型变量 
		string year_string;
		//打印输入提示 
		cout<<"请输入一个年份(注意，年份为4位的正整数)：";
		//接收键盘输入数据 
		cin>>year;
		//判断数据是否超长 
		if( cin.peek() != '\n') {
            cout << "您输入的年份不是一个正确的数字，请重新输入！" << endl;
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            continue; 
        }
        //判断数据是否为正整数 
		if(!cin.fail()){
			//判断数据是否为4位整数 
			if(year>=1000&&year<=9999){
				//判定数据是闰年还是平年 
				if((year%4==0&& year%100!=0)||
				    year%400==0
				) 
				flag=true;
			 	else
			 	flag=false;
			 	//输出结果 
			 	if(flag)
			 	 cout<<year<<"年是闰年"<<endl;
				else
				 cout<<year<<"年是平年"<<endl;
		 }else{
		 	cout<<"您输入的年份不正确，请重新输入"<<endl; 
		}	
		}else{
			cout<<"您输入的年份不是一个正确的数字，请重新输入！"<<endl; 
			//解决输入字符串的bug 
			cin.clear();
			cin>>year_string;
		}
	} 
	 return 0; 
}
