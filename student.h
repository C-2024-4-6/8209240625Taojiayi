#include<algorithm>
#include<cstring>
class Student              //类声明
{
public:                   //公用成员函数原型声明
	void display();
	void setvalue(int n, const char s[], char c) {
		num = n;
        strcpy_s(name, s);
		sex = c;
	}
private:
	int num;
	char name[20];
	char sex;
};
#pragma once
