//10. º° Âï±â - 2

#include <iostream>

using namespace std;

int main()
{
	int n;

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n-1; j++)
		{
			cout << ' ';
		}
		for (int j = 0; j <= i; j++)
		{
			cout << '*';
		}
		cout << '\n';
	}

	return 0;
}