#include<iostream>
using namespace std;
class t{
private:
	int length;
	int width;
	int height;
	
public:
	void set(int l,int w,int h){
		length = l;
		width = w;
		height = h;
	}
	int v(){
		return length*width*height;	
	}
};
int main(){
	int l,w,h;
	cout<<"输入长宽高"<<endl;
	cin>>l>>w>>h;
	t t1;
	t1.set(l,w,h);
	cout<<"该立方体的体积为："<<endl;
	cout<<t1.v()<<endl;
	
	
	
}
