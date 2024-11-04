#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double num1, num2;
	char op;
	
	cout << "请输入第一个数字: ";
	cin >> num1;
	
	cout << "请输入运算符 (+, -, *, /, %): ";
	cin >> op;
	
	cout << "请输入第二个数字: ";
	cin >> num2;
	
	double result;
	bool validOperation = true;
	
	switch (op) {
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		if (num2 == 0) {
			cout << "错误: 除数不能为零！" << endl;
			validOperation = false;
		} else {
			result = num1 / num2;
		}
		break;
	case '%':
		if (fmod(num1, num2) == 0 || num2 == 0) {
			cout << "错误: 取模运算的除数必须是整数且不能为零！" << endl;
			validOperation = false;
		} else {
			result = static_cast<int>(num1) % static_cast<int>(num2);
		}
		break;
	default:
		cout << "错误: 无效的运算符！" << endl;
		validOperation = false;
		break;
	}
	
	if (validOperation) {
		cout << "结果: " << result << endl;
	}
	
	return 0;
}

