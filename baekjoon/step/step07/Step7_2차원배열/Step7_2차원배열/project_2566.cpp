//2. ÃÖ´ñ°ª

#include <iostream>

using namespace std;

int main()
{
	int matrix[9][9];

	int max = 0;
	int maxRow = 0, maxCol = 0;

	//Çà·Ä ÀÔ·Â
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> matrix[i][j];
		}
	}

	//ÃÖ´ñ°ª Ã£±â
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

	//Çà·Ä ÃÖ´ñ°ª°ú ÃÖ´ñ°ªÀÇ Çà°ú ¿­ Ãâ·Â
	cout << matrix[maxRow][maxCol] << '\n';
	cout << maxRow + 1 << ' ' << maxCol + 1;

	return 0;
}