//5. 수 정렬하기 3

#include <iostream>

using namespace std;

int main()
{
	int n;

	cin.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> n;

	int tmpIn;	//입력 값

	int* arrCounting = new int[10000]();	//계수하는 배열 생성 및 초기화

	//입력 및 count하기
	for (int i = 0; i < n; i++)
	{
		cin >> tmpIn;
		arrCounting[tmpIn - 1]++;
	}

	//출력
	for (int i = 0; i < 10000; i++)
	{
		for (int j = 0; j < arrCounting[i]; j++)
		{
			cout << i + 1 << '\n';
		}
	}

	delete[] arrCounting;

	return 0;
}