//5. °ø ³Ö±â

#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m;

	cin >> n >> m;

	int* basket = new int[n];
	if (!basket)
		return -1;

	for (int i = 0; i < n; i++)
		basket[i] = 0;

	int fromIndex, toIndex, ball;

	for (int i = 0; i < m; i++)
	{
		cin >> fromIndex >> toIndex >> ball;
		for (int j = fromIndex-1; j <= toIndex-1; j++)
		{
			basket[j] = ball;
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << basket[i] << ' ';
	}

	delete[] basket;

	return 0;
}