#include<list>
#include<string>
#include<vector>
#include<deque>
#include<iostream>
using namespace::std;
int main()
{
	vector<int> iv;
	int i;
	
	
	while(cin >> i)
		try {
	switch (i) {
		
	case 0:
		cout << iv[0] << endl;
		break;
	case 1:
		cout << *iv.begin() << endl;
		break;
	case 2:
		cout << iv.front() << endl;
		break;
	case 3:
		cout << iv.at(0) << endl;
		break;
	default:
		break;
	}
	}
	catch (out_of_range &out) {
		cerr << "out of range : " <<out.what() << endl;
	}
	catch (...) {
		cerr << "catch error" << endl;
	}
	

	
	 
}