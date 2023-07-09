//1. 진법 변환

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	string n;
	int b;
	int result = 0;

	cin >> n >> b;

	for (int i = n.length() - 1; i >= 0; i--)
	{
		int tmp;
		if ('0' <= n.at(i) && n.at(i) <= '9')
		{
			tmp = n.at(i) - '0';
		}
		else if ('A' <= n.at(i) && n.at(i) <= 'Z') //'A' ~ 'Z'
		{
			tmp = n.at(i) - 'A' + 10;
		}
		result += (tmp * pow(b, n.length() - 1 - i));
	}

	cout << result;

	return 0;
}