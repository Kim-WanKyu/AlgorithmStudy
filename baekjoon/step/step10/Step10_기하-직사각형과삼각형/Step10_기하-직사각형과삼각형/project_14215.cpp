//8. �� ����

#include <iostream>

using namespace std;

int main()
{
	int a, b, c;

	cin >> a >> b >> c;

	int originMax = (a > b ? a : b) > c ? (a > b ? a : b) : c;	//���� �� ���� ���� ����

	if (originMax >= a + b + c - originMax)	//�ﰢ���� ���� ������, (���� �� ���� ���̰� ������ �� ���� ������ �պ��� ũ�ų� ���� ���)
	{
		int changedMax = a + b + c - originMax - 1;	//���� �� ���� �پ�� ����
		int diff = originMax - changedMax;			//���� �� ���� ���� ���̿� �پ�� ������ ����

		cout << a + b + c - diff;
	}
	else
	{
		cout << a + b + c;
	}

	return 0;
}