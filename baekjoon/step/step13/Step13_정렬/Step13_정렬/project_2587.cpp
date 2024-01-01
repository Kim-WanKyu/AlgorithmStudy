//2. ´ëÇ¥°ª2

#include <iostream>

using namespace std;

int main()
{

	int* arr = new int[5];

	int sum = 0;
	int aver;
	int median;

	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 1; j < 5 - i; j++)
		{
			if (arr[j - 1] > arr[j])
			{
				int tmp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}

	aver = sum / 5;
	median = arr[2];
	
	cout << aver << '\n' << median;

	delete[] arr;

	return 0;
}