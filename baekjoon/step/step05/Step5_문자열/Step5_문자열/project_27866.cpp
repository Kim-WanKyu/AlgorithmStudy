//1. ���ڿ� ���ڿ�

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