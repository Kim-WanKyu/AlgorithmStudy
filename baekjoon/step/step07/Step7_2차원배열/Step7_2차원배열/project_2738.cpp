//1. 행렬 덧셈

#include <iostream>

using namespace std;

int main()
{
	int n, m;
	
	cin >> n >> m;

	//이차원 배열 동적 할당
	int** matrix = new int*[n];
	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[m];
	}

	//1번 행렬 입력
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> matrix[i][j];
		}
	}

	//2번 행렬 입력
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int tmp;
			cin >> tmp;
			matrix[i][j] += tmp;
		}
	}

	//행렬 합 출력
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << matrix[i][j] << ' ';
		}
		cout << '\n';
	}

	//이차원 배열 할당 해제
	for (int i = 0; i < n; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;

	return 0;
}