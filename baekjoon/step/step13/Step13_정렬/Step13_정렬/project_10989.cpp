//5. �� �����ϱ� 3

#include <iostream>

using namespace std;

int main()
{
	int n;

	cin.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> n;

	int tmpIn;	//�Է� ��

	int* arrCounting = new int[10000]();	//����ϴ� �迭 ���� �� �ʱ�ȭ

	//�Է� �� count�ϱ�
	for (int i = 0; i < n; i++)
	{
		cin >> tmpIn;
		arrCounting[tmpIn - 1]++;
	}

	//���
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