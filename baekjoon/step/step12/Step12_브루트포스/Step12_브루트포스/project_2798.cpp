//1. ∫Ì∑¢¿Ë

#include <iostream>

using namespace std;

int main()
{
	int n, m;

	cin >> n >> m;

	int* card = new int[n];

	int max = 0;


	for (int i = 0; i < n; i++)
	{
		cin >> card[i];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				if (card[i] + card[j] + card[k] <= m && max < card[i] + card[j] + card[k])
					max = card[i] + card[j] + card[k];
			}
		}
	}

	cout << max;

	delete[] card;

	return 0;
}