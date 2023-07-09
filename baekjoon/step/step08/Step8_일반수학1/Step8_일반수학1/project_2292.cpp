//5. ¹úÁı

#include <iostream>

using namespace std;

int main()
{
	int n;

	cin >> n;

	int r = 1;

	int layer = 1;
	while (true)
	{
		if (n <= r)
		{
			cout << layer;
			break;
		}

		r += 6 * layer;

		layer++;
	}

	return 0;
}