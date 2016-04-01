#include<iostream>
using std::cout;
using std::cin;

int main()
{
	int i, j;
	cout << "输入两个数字" << std::endl;
	if (cin >> i >> j)
		cout << i << " + " << j << " = " << i*j << std::endl;
	return 0;
}