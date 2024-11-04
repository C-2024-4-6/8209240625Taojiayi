#include<iostream>
using namespace std;
double F(double x){
	if(0<x && x<1){
		return 3-2*x;
	}
	if(1<= x && x<5){
		return (2.0/4*x)+1;
	}
	if(5<= x && x<10){
		return x*x;
	}
}
int main(){
	double x;
	while(cin>>x){
		cout<<"结果为："<<F(x)<<endl;
	}
	
	return 0;
}
