#include<algorithm>
#include<cstring>
class Student              //������
{
public:                   //���ó�Ա����ԭ������
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
