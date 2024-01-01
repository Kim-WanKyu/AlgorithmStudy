//1. ���� ī��

#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, m;

	set<int> card;	//���հ� ����. �ߺ� ��� x�� �ڷ������� ���� ���Ҵ� ����, ���ĵǾ��ִ� �����̳��̴�.

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		card.insert(num); //����
	}

	cin >> m;

	for (int i = 0; i < m; i++)
	{
		int findingNum;
		cin >> findingNum;
		cout << card.count(findingNum) << ' ';	//.count(element) �� set�� �ش� element�� ������ 1 �ƴϸ� 0�� �����Ѵ�.
	}
	
	return 0;
}