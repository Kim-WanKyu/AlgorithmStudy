//2. 최소공배수

#include <iostream>

using namespace std;

long long int getGCD(long long int a, long long int b);

int main()
{
	long long int a, b;
	cin >> a >> b;

	cout << a * b / getGCD(a, b) << '\n';

	return 0;
}

long long int getGCD(long long int a, long long int b)
{
	long long int remain = a % b;
	if (remain == 0)
		return b;

	return getGCD(b, remain);
}