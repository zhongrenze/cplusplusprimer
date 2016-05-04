#include<list>
#include<string>
#include<vector>
#include<deque>
#include<iostream>
using namespace::std;
int main()
{
	list<string> strdeq;
	string str;
	while (cin >> str) {
		strdeq.push_back(str);
	}
	for (auto i = strdeq.begin(); i != strdeq.end(); ++i) {
		cout << *i << endl;
	}
}