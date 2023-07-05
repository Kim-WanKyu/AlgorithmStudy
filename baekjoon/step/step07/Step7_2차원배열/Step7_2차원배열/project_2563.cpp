//4. 색종이

#include <iostream>

using namespace std;

int main()
{
	int n;
	int count = 0;

	//2차원 배열 동적 할당 및 초기화
	bool** arr = new bool* [100];
	for (int i = 0; i < 100; i++)
	{
		arr[i] = new bool[100];
		fill_n(arr[i], 100, false);
	}

	cin >> n;

	//색종이 배치
	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		
		for (int j = 0; j < 10; j++)
			fill_n(&arr[x + j][y], 10, true);
	}

	//색종이 영역 계산
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (arr[i][j] == true)
				count++;
		}
	}

	cout << count;

	//2차원 배열 할당 해제
	for (int i = 0; i < 100; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;

	return 0;
}