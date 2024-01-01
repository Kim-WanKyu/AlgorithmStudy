//4. ���μ�

#include <iostream>
#include <algorithm>

using namespace std;

int getGCD(int a, int b);

int main()
{
	int n;	//�̹� �ɾ��� ���μ��� ��
	cin >> n;

	int* trees = new int[n];	//�̹� �ɾ��� ���μ��� ��ġ
	for (int i = 0; i < n; i++)
	{
		cin >> trees[i];
	}

	sort(trees, trees + n);	//����

	int* intervals = new int[n - 1];	//�� ���μ� ���� ����
	for (int i = 0; i <  n - 1; i++)
	{
		intervals[i] = trees[i + 1] - trees[i];
	}

	//�ִ� ���� ���ϱ�
	int maxInterval = intervals[0];
	for (int i = 1; i < n - 1; i++)
	{
		maxInterval = getGCD(maxInterval, intervals[i]);
	}

	//���� �ɾ��� ���μ��� �ּ� ���� ��� �� ���
	int newTreesCount = (trees[n - 1] - trees[0]) / maxInterval + 1 - n;
	cout << newTreesCount;

	delete[] trees;
	delete[] intervals;

	return 0;
}

int getGCD(int a, int b)
{
	int remain = a % b;
	if (remain == 0)
		return b;

	return getGCD(b, remain);
}