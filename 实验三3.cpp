#include<iostream>
#include<cmath>
#include"mytriangle.h"
using namespace std;
bool is_valid(double side1,double side2,double side3){
	if(side1 + side2 > side3 && side1 + side3 > side2 && side3 + side2 > side1){
		return true;
	}
	return false;
}
double double_area(double side1,double side2, double side3){
	double s=(side1+side2+side3)/2;
	return sqrt(s*(s-side1)*(s-side2)*(s-side3));
}
int main(){
	cout<<"请输入三角形三边：";
	double side1,side2, side3;
	cin>>side1>>side2>>side3;
	double ans;
	if(is_valid(side1,side2, side3)){
		ans = double_area(side1,side2, side3);
		cout<<ans<<endl;
	}
	else{
		cout<<"三角形不合法"<<endl;
	}
	
	
}
