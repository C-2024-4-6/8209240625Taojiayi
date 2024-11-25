#include<iostream>
using namespace std;
int main(){
	bool door[110] = {true};
	for(int i=2;i<=100;i++){
		for(int j=i;j<=100;j += i+1 )
		{	if(door[j]){
			door[j] = false;
			}
			else{
			door[j] = true;
			}
		}	
	}
	for(int i=1;i<=100;i++){
		if(door[i]){
			cout<<i<<" ";
		}
	}
	
}
