//3. 최소, 최대

#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	int max, min;

	cin >> n;

	int* arr = new int[n];
	if (!arr)
		return -1;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	max = min = arr[0];

	for (int i = 1; i < n; i++)
	{
		max = max > arr[i] ? max : arr[i];
		min = min < arr[i] ? min : arr[i];
	}

	cout << min << ' ' << max;

	delete[] arr;

	return 0;
}