//3. 커트라인

#include <iostream>

using namespace std;

int main()
{
	int n, k;

	int cutline = 0;

	cin >> n >> k;

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < n - i; j++)
		{
			if (arr[j - 1] < arr[j])
			{
				int tmp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}

	cutline = arr[k - 1];

	cout << cutline;

	delete[] arr;

	return 0;
}