#include<iostream>
using namespace std;
int F(int max ,int min){
	while(min != 0){
		int temp = min;
		min = max%min;
		max = temp;
	
	}
	return max;
}
int main(){
	cout<<"请输入两个整数: "<<endl;
	int a,b;
	cin>>a>>b;
	cout<<"二者的最大公约数为："<<F(a,b)<<endl;
	cout<<"二者的最小公倍数为："<<a/F(a,b)*b<<endl;
} 
