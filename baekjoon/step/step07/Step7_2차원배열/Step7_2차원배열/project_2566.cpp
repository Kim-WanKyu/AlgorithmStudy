//2. �ִ�

#include <iostream>

using namespace std;

int main()
{
	int matrix[9][9];

	int max = 0;
	int maxRow = 0, maxCol = 0;

	//��� �Է�
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> matrix[i][j];
		}
	}

	//�ִ� ã��
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

	//��� �ִ񰪰� �ִ��� ��� �� ���
	cout << matrix[maxRow][maxCol] << '\n';
	cout << maxRow + 1 << ' ' << maxCol + 1;

	return 0;
}