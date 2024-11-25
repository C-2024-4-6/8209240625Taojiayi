#include<iostream>
using namespace std;
int * sortarry(int * list ,int listsize){ 
	for(int i=0;i<listsize-1;i++){
		for(int j=0;j<listsize-1-i;j++){
			if(list[j]>list[j+1]){
				int temp = list[j];
				list[j]  =  list[j+1];
				list[j+1]  =  temp;
			}
		}
	}
	return list;
}


int main(){
	int size;
	cout<<"输入数组大小: ";
	cin>>size;
	int *list = new int[size];
	for(int i=0;i<size;i++){
		int temp;
		cout<<"请输入第"<<i+1<<"个元素: ";
		cin>>temp;
		list[i] = temp;
	}
	sortarry(list,size);
	cout<<"在排序之后："<<endl;
	for(int i=0;i<size;i++){
		cout<<list[i]<<" ";
	}
	delete[] list;
}
