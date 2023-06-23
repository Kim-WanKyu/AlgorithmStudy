//6. ºü¸¥ A+B

#include <iostream>

using namespace std;

int main()
{
	int t, a, b;

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> a >> b;
		cout << a + b << '\n';
	}

	return 0;
}