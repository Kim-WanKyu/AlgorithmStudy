//1. 개수 세기

#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, v;
	int count = 0;

	cin >> n;

	int* arr = new int[n];
	if (!arr)
		return -1;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cin >> v;

	for (int i = 0; i < n; i++)
	{
		if (v == arr[i])
			count++;
	}

	cout << count;

	delete [] arr;

	return 0;
}