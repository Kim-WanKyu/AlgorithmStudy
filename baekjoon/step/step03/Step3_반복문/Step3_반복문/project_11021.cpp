//7. A+B - 7

#include <iostream>

using namespace std;

int main()
{
	int t, a, b;

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> t;

	for (int i = 1; i <= t; i++)
	{
		cin >> a >> b;
		cout << "Case #" << i << ": " << a + b << '\n';
	}

	return 0;
}