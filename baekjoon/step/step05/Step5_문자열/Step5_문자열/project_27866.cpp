//1. 문자와 문자열

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	int index;

	cin >> str >> index;

	cout << str.at(index - 1);

	return 0;
}