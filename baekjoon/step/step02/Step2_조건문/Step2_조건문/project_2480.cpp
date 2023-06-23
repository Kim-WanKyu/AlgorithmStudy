//7. 주사위 세개

#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	int reward = 0;
	
	cin >> a >> b >> c;

	if (a == b && b == c)
		reward = 10000 + a * 1000;
	else if (a == b || a == c)
		reward = 1000 + a * 100;
	else if (b == c)
		reward = 1000 + b * 100;
	else
		reward = ((a > b ? a : b) > c ? (a > b ? a : b) : c) * 100;

	cout << reward;

	return 0;
}