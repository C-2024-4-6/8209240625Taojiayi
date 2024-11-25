#include<iostream>
using namespace std;
int F(int &max,int &min){
	int a = max*min;
	
	while(min > 0){
		int temp = min;
		min = max%min;
		max = temp;
	}
	
	cout<<"最大公约数为: "<<max<<" "<<"最小公倍数为："<<a/max<<endl;
}
int main(){
	int n,m;
	cin>>n>>m;
	F(n,m);
	
	
}
