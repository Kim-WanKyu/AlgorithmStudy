//6. 공 바꾸기

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
		basket[i] = i + 1;

	int fromIndex, toIndex;

	for (int i = 0; i < m; i++)
	{
		cin >> fromIndex >> toIndex;

		int tmp = basket[fromIndex-1];
		basket[fromIndex-1] = basket[toIndex-1];
		basket[toIndex-1] = tmp;
	}

	for (int i = 0; i < n; i++)
	{
		cout << basket[i] << ' ';
	}

	delete[] basket;

	return 0;
}