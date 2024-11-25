#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
	cout<<"Enter ten numbers: ";
	unordered_set<int> num;
	for(int i=1;i<=10;i++){
		int  temp;
		cin>>temp;
		num.insert(temp);
	}

	cout<<"The distinct numbers are: ";
	for(int n:num){
		cout<<n<<" ";
	}
}
