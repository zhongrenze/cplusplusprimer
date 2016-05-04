#include<list>
#include<string>
#include<vector>
#include<deque>
#include<iostream>
using namespace::std;
int main()
{
	deque<int> evenDeq;
	deque<int> oddDeq;
	list<int> iLst{ 12,34,2,4,2,1,7,56,3,19 };
	for (auto i : iLst) {
		(i % 2) ? oddDeq.push_back(i) : evenDeq.push_back(i);
	}
	cout << "even" << endl;
	for (auto i : evenDeq) {
		cout << i << endl;
	}
	cout << "odd" << endl;
	for (auto i : oddDeq) {
		cout << i << endl;
	}
}