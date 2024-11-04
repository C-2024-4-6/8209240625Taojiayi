#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	cout<<"请输入华氏温度:" <<endl;
	double f;
	cin>>f;
	double c = (f-32)*5.0/9.0; 
	printf("摄氏温度为：%.2f",c);
	
	return 0;
	
}
