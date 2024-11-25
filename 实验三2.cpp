#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
bool is_prime(int num){
	if(num < 2) return false;
	if( num == 2) return true;
	else{
		if(num % 2 == 0){
			return false;
		}
		else{
			for(int i=3;i<=sqrt(num);i++){
				if(num % i == 0) {
					return false;
				}
			}
		}
	}
	
	return true;
}
int main(){
	int num;
	cin>>num;
	if(is_prime(num)){
		cout<<"true"<<endl;
	}else{
		cout<<"false"<<endl;
	}
	vector<int> ans;
	int count = 1;  
	while(ans.size() < 200){
		if(is_prime(count)){
			ans.push_back(count);
		}
		count++;
	}
	for(int i=1;i<201;i++){
		
		cout<<ans[i-1]<<" ";
		if(i % 10 == 0){
			cout<<endl;
		}
		
	}
	
}
