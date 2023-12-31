//2. 최댓값

#include <iostream>

using namespace std;

int main()
{
	int matrix[9][9];

	int max = 0;
	int maxRow = 0, maxCol = 0;

	//행렬 입력
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> matrix[i][j];
		}
	}

	//최댓값 찾기
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (max < matrix[i][j])
			{
				max = matrix[i][j];
				maxRow = i;
				maxCol = j;
			}
		}
	}

	//행렬 최댓값과 최댓값의 행과 열 출력
	cout << matrix[maxRow][maxCol] << '\n';
	cout << maxRow + 1 << ' ' << maxCol + 1;

	return 0;
}