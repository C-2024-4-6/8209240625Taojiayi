#include <iostream>
using namespace std;

int main() {
	char c;
	int letterCount = 0; // 英文字母个数
	int spaceCount = 0; // 空格个数
	int digitCount = 0; // 数字字符个数
	int otherCount = 0; // 其它字符个数
	
	cout << "请输入一行字符：" << endl;
	
	// 循环读入字符，直到遇到回车换行符
	while ((c = getchar())!= '\n') {
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
			letterCount++;
		} else if (c == ' ') {
			spaceCount++;
		} else if (c >= '0' && c <= '9') {
			digitCount++;
		} else {
			otherCount++;
		}
	}
	
	cout << "英文字母个数：" << letterCount << endl;
	cout << "空格个数：" << spaceCount << endl;
	cout << "数字字符个数：" << digitCount << endl;
	cout << "其它字符个数：" << otherCount << endl;
	
	return 0;
}

