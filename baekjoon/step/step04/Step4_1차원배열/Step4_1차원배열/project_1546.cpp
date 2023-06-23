//10. ЦђБе

#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	int sum = 0;
	int max = 0;

	cin >> n;

	int* arr = new int[n];
	if (!arr)
		return -1;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		
		sum += arr[i];
		max = max > arr[i] ? max : arr[i];
	}

	cout << static_cast<double> (sum) / n / max * 100;


	delete[] arr;

	return 0;
}