//3. ºÐ¼ö ÇÕ

#include <iostream>

using namespace std;

int getGCD(int a, int b);

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	int s, m;
	s = a * d + b * c;
	m = b * d;

	cout << s / getGCD(s, m) << ' ' << m / getGCD(s, m);

	return 0;
}

int getGCD(int a, int b)
{
	int remain = a % b;
	if (remain == 0)
		return b;

	return getGCD(b, remain);
}