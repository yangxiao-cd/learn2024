#include<iostream>
#include<iomanip>	
using namespace std;
int main(){
	int kun,tu;
	for(kun=1;kun<=34;kun++){
		for(tu=1;tu<=23;tu++){
			if(kun+tu==35){
				if(kun*2+tu*4==94){
					cout<<"��ϰʱ�������ĸ�����ϰ��������"<<kun<<endl<<"�ܲ����ڹ�Ĳ˼��ã�" <<tu; 
				}
			}
		}
			
		cout<<endl;	
	}
	return 0; 
}	
