//3. �� _1

#include <iostream>

using namespace std;

int main()
{
	int n;
	int sum = 0;

	cin >> n;

	for (int i = 1; i <= n; i++)
		sum += i;

	cout << sum;

	return 0;
}