#include<iostream>
using namespace std;
class point{
private:
	int x;
	int y;
public:
	point(int x,int y):x(x),y(y){
		
	}
	
	void setPoint(int i,int j){
		x = x+i;
		y = y+j;
	}
	
	void display(){
		cout<<"点的坐标为"<<x<<" "<<y<<endl;
	}
};

int main(){
	point p1(60,80);
	p1.display();
	p1.setPoint(23,45);
	p1.display();
	
	return 0;
	
}
