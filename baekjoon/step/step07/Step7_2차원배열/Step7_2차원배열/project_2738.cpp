//1. ��� ����

#include <iostream>

using namespace std;

int main()
{
	int n, m;
	
	cin >> n >> m;

	//������ �迭 ���� �Ҵ�
	int** matrix = new int*[n];
	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[m];
	}

	//1�� ��� �Է�
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> matrix[i][j];
		}
	}

	//2�� ��� �Է�
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int tmp;
			cin >> tmp;
			matrix[i][j] += tmp;
		}
	}

	//��� �� ���
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << matrix[i][j] << ' ';
		}
		cout << '\n';
	}

	//������ �迭 �Ҵ� ����
	for (int i = 0; i < n; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;

	return 0;
}