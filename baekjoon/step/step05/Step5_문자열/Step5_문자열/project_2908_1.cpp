//9. »ó¼ö _1

#include <iostream>

using namespace std;


int main()
{
	int a, b;
	cin >> a >> b;

	int reversedA, reversedB;

	reversedA = (a % 10 * 100) + (a / 10 % 10 * 10) + (a / 100);
	reversedB = (b % 10 * 100) + (b / 10 % 10 * 10) + (b / 100);

	cout << (reversedA > reversedB ? reversedA : reversedB);

	return 0;
}