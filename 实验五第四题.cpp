#include<iostream>
using namespace std;
class student{
private:
	int id;
	int score;
public:
	student(int i,int s):id(i) ,score(s){
		
	}
	
	
	int getscore(){
	return score;	
	}
	int getid(){
	return id;
	}
	
};
int max (student *s){
	int pos = 0;
	int max = 0;
	for(int i=0;i<5;i++){
		if( s->getscore() > max){
			pos = s->getid();
			max = s->getscore();
		}	
		s++;
	}
	return pos;
}
int main(){
	student s_arry[5] = {
		{11,69},{12,79},{33,46},{4,67},{5,88}
	};
	
	student *s = &s_arry[0];
	cout<<max(s)<<endl;
	
}
