#include<iostream>
using namespace std;
int main()
{
	cout << "char length:" << sizeof(char) << endl;
	cout << "int length:" << sizeof(int) << endl;
	cout << " double length:" << sizeof(double) << endl;
	cout << "float length:" << sizeof(float) << endl;
	cout << "long length:" << sizeof(long) << endl;
	cout << "long length:" << sizeof(long) << endl;
        cout << "long long length:" << sizeof(long long) << endl;
        cout << "short length:" << sizeof(short) << endl;
	cout << "bool length:" << sizeof(bool) << endl;
	cout << "wchar_t length:" << sizeof(wchar_t) << endl;
	cout << "char16_t length:" << sizeof(char16_t) << endl;
        cout << "char32_t length:" << sizeof(char32_t) << endl;
	//错误的	cout << "void length:" << sizeof(void) << endl;
        cout << "signed length:" << sizeof(signed) << endl;
	return 0;
}
