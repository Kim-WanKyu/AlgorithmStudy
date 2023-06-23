//12. A+B - 4

#include <iostream>

using namespace std;

int main()
{
	int a, b;

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	while (cin >> a >> b && !cin.eof())
	{
		cout << a + b << '\n';
	}

	return 0;
}