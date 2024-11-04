#include<iostream>
using namespace std;
bool check(double a,double b, double c){
	if(a+b > c&& a+c > b&&b+c>a){
		return true;
	}
	else{
		return false;
	}
}
bool recheck(double a,double b, double c){
	if(a==b||a==c||b==c){
		return true;
	}
	return false;
}
int main(){
	cout<<"请输入三角形三边："<<endl;
	double a,b,c;
	cin>>a>>b>>c;
	if(check(a,b,c)){
		cout<<"三角形周长为： "<<a+b+c<<endl;
		if(recheck(a,b,c)){
			cout<<"该三角形是等腰三角形"<<endl;
		}else{
			cout<<"该三角形不是等边三角形"<<endl;
		}
	}

	
}
