#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int parseHex(const string& hexString){
	int len = hexString.length();
	int ans = 0;
	for(int i=0;i<len;i++){
		char c = hexString[i];
		int value;
		if (c >= '0' && c <= '9') {
			value = c - '0';
		} else if (c >= 'A' && c <= 'F') {
			value = c - 'A' + 10;
		} else if (c >= 'a' && c <= 'f') {
			value = c - 'a' + 10;
	}
		
	ans += value*pow(16,len-1-i); 	
		
	}
	return ans;
}
int main(){
	string it = "A5";
	cout<<parseHex(it)<<endl;
	
	
}
