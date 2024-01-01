//4. 체스판 다시 칠하기

#include <iostream>

using namespace std;

int main()
{
	int n, m;

	cin >> n >> m;

	char** board = new char* [n];
	for (int i = 0; i < n; i++)
		board[i] = new char[m];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> board[i][j];
		}
	}

	int minFlipCount = 33;

	for (int i = 0; i <= n - 8; i++)
	{
		for (int j = 0; j <= m - 8; j++)
		{
			int flipCountB = 0;
			for (int k = 0; k < 8; k++)
			{
				for (int l = 0; l < 8; l++)
				{
					if ((i + k + j + l) % 2 == 0 && board[i + k][j + l] == 'W')
					{
						flipCountB++;
					}
					else if ((i + k + j + l) % 2 == 1 && board[i + k][j + l] == 'B')
					{
						flipCountB++;
					}
				}
			}

			int flipCountW = 0;
			for (int k = 0; k < 8; k++)
			{
				for (int l = 0; l < 8; l++)
				{
					if ((i + k + j + l) % 2 == 0 && board[i + k][j + l] == 'B')
					{
						flipCountW++;
					}
					else if ((i + k + j + l) % 2 == 1 && board[i + k][j + l] == 'W')
					{
						flipCountW++;
					}
				}
			}

			int flipCount = flipCountB < flipCountW ? flipCountB : flipCountW;
			minFlipCount = minFlipCount < flipCount ? minFlipCount : flipCount;
		}
	}

	cout << minFlipCount;

	for (int i = 0; i < n; i++)
		delete[] board[i];
	delete[] board;

	return 0;
}