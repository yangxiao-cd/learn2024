#include<iostream>
#include<limits> 
using namespace std;
/*������ʵ����ƽ����Ĺ��� */ 
int main()
{
	//���֪ʶ����ʾ 
	cout<<"֪ʶ�㣺"<<endl<<"����һ��" <<endl<<"���겻��" <<endl<<"�İ�������"  <<endl<<endl; 
	//��ʼѭ�� 
	while(true){
		//�����Ƿ���ƽ������ 
		bool flag;
		//������������ 
		int year;
		//�����ַ������ͱ��� 
		string year_string;
		//��ӡ������ʾ 
		cout<<"������һ�����(ע�⣬���Ϊ4λ��������)��";
		//���ռ����������� 
		cin>>year;
		//�ж������Ƿ񳬳� 
		if( cin.peek() != '\n') {
            cout << "���������ݲ���һ����ȷ�����֣����������룡" << endl;
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            continue; 
        }
        //�ж������Ƿ�Ϊ������ 
		if(!cin.fail()){
			//�ж������Ƿ�Ϊ4λ���� 
			if(year>=1000&&year<=9999){
				//�ж����������껹��ƽ�� 
				if((year%4==0&& year%100!=0)||
				    year%400==0
				) 
				flag=true;
			 	else
			 	flag=false;
			 	//������ 
			 	if(flag)
			 	 cout<<year<<"��������"<<endl;
				else
				 cout<<year<<"����ƽ��"<<endl;
		 }else{
		 	cout<<"���������ݲ���ȷ������������"<<endl; 
		}	
		}else{
			cout<<"���������ݲ���һ����ȷ�����֣����������룡"<<endl; 
			//��������ַ�����bug 
			cin.clear();
			cin>>year_string;
		}
	} 
	 return 0; 
}
