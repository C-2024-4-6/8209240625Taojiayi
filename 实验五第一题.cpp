#include<iostream>
using namespace std;
class Time             // 定义Time类
{private:              // 数据成员为公用的
	int hour;
	int minute;
	int sec ;
public:
	void sethour(int h){
		hour = h;
	}
	void setminute(int m){
		minute = m;
	}
	void setsec(int s){
		sec = s;
	}
	
	void show(){
		cout<<hour<<" "<<minute<<" "<<sec<<endl;
	}
};
int main()
{
	/*Time t1;           //定义t1为Time类对象
	cin>>t1.hour;      //输入设定的时间 
	cin>>t1.minute;
	cin>>t1.sec;
	cout<<t1.hour<<":"<<t1.minute<<":"<<t1.sec<<endl ;
	return 0;*/
	
	
}

