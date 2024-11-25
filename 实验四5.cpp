#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int indexOf(const char s1[], const char s2[]) {
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	
	if (len1 > len2) {
		return -1;
	}
	
	for (int i = 0; i <= len2 - len1; i++) {
		int j;
		for (j = 0; j < len1; j++) {
			if (s2[i + j]!= s1[j]) {
				break;
			}
		}
		if (j == len1) {
			return i;
		}
	}
	return -1;
}

int main() {
	cout<<"Enter the first string: ";
	char s1[100];
	cin.getline(s1,100);
	cout<<"Enter the second string: ";
	char s2[100];
	cin.getline(s2,100);
	int result = indexOf(s1, s2);
	if (result == -1) {
		printf("s1 不是 s2 的子串\n");
	} else {
		printf("s1 是 s2 的子串，下标为 %d\n", result);
	}
	return 0;
}

