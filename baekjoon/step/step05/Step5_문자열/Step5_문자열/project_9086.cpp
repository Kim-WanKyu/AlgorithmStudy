//3. ¹®ÀÚ¿­

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int t;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		string str;
		cin >> str;
		cout << str.at(0) << str.at(str.length() - 1) << '\n';
	}

	return 0;
}