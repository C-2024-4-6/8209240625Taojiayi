#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double list[10] = {2.3,4.3,2.1,1.1,5.6,7.8 ,1.3,8.1,4.9,5.6};
	int listsize = sizeof(list) / sizeof(list[0]); 
	for(int i=0;i<listsize-1;i++){
		for(int j=0;j<listsize-1-i;j++){
			if(list[j]>list[j+1]){
				double temp = list[j];
				list[j]  =  list[j+1];
				list[j+1]  =  temp;
			}
		}
	}

	for(int i=0;i<listsize;i++){
		cout<<list[i]<<" ";
	}
	
}


