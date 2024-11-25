#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> list_1;
vector<int> list_2;
int main(){
	cout<<"Enter list1: ";
	int size_1;
	cin>>size_1;
	while(size_1--){
		int temp;
		cin>>temp;
		list_1.push_back(temp);
	}
	cout<<"Enter list2: ";
	int size_2;
	cin>>size_2;
	while(size_2--){
		int temp;
		cin>>temp;
		list_2.push_back(temp);
	}
	for(int &num:list_2){
		list_1.push_back(num);
	}
	sort(list_1.begin(),list_1.end());
	cout<<"The merged list is:";
	for(int num:list_1){
		cout<<num<<" ";
	}
	
	
}
