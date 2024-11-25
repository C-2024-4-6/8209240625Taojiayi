#include<iostream>
#include<cmath>
using namespace std;
#include <iostream>
using namespace std;

int peach(int day) {
	if (day == 10) {
		return 1;
	} else {
		return (peach(day + 1)  * 2 + day);
	}
}

int main() {
	cout << "猴子第一天摘的桃子数量为：" << peach(1) << endl;
	return 0;
}


