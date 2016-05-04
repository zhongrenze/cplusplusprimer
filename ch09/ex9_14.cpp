#include<list>
#include<string>
#include<vector>
#include<iostream>
using namespace::std;
int main()
{
	char a[5] = "1234";
	list<char*> cplist{a,"234","345"};
	vector<string> svec(cplist.begin(), cplist.end());
	for (auto str : svec)
		cout << str << endl;
	return 0;
}