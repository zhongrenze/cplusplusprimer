#include<list>
#include<string>
#include<vector>
#include<iostream>
using namespace::std;
ostream& operator<<(ostream& out, list<string> slist) {
	for (auto str : slist) {
		out << str << endl;
	}
	return out;
}
int main()
{
	list<string> slist{ "123","234","345" };
	auto elem1 = slist.begin(), elem2 = slist.end(), elem3 = elem1;
	//elem1==elem2 :Î´É¾³ý¡£
	elem3 = slist.erase(elem1, elem1);
	cout <<slist << endl;
	//elem1==elem2 elem2=slist.end():Î´É¾³ý¡£
	elem3 = slist.erase(elem2, elem2);
	cout << slist << endl;

	//elem1 ,elem2 Ã»ÎÊÌâ¡£		
	elem3 = slist.erase(elem1, elem2);
	cout << slist << endl;
	return 0;

}