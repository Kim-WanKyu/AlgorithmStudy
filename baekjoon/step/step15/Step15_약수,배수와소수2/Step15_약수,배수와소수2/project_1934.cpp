//1. 최소공배수

#include <iostream>

using namespace std;

int getGCD(int a, int b);

int main()
{
	int t;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		int a, b;
		cin >> a >> b;

		cout << a * b / getGCD(a, b) << '\n';
	}

	return 0;
}

int getGCD(int a, int b)
{
	int remain = a % b;
	if (remain == 0)
		return b;

	return getGCD(b, remain);
}