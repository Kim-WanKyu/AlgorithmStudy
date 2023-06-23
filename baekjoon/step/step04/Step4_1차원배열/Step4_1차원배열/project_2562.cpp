//4. ÃÖ´ñ°ª

#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int max, maxIndex;

	int arr[9] = { 0, };
	
	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];
	}

	max = arr[0];
	maxIndex = 1;

	for (int i = 1; i < 9; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			maxIndex = i + 1;
		}
	}

	cout << max << '\n' << maxIndex;

	return 0;
}