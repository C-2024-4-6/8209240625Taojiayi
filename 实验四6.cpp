#include<iostream>
#include<string>
#include<cstring>
using namespace std;
void count(const char s[],int counts[] ){
	counts[26] = {0};
	int size = strlen(s);
	for(int i=0;i<26;i++){
		for(int j=0;j<size;j++){
			if(s[j] - 'a' == i){
				counts[i]++;
			}
			if(s[j] - 'A' == i){
				counts[i]++;
			}
		}
	}
}
int main(){
	cout<<"Enter the string: ";
	char s1[100];
	int counts[26] = {0};
	cin.getline(s1,100);
	count(s1,counts);
	for(int i=0;i<26;i++){
		char word = i+97;
		if(counts[i] != 0){
			cout<<word<<":"<<counts[i]<<" times "<<endl;
		}
	
	}
	
	
	
}
