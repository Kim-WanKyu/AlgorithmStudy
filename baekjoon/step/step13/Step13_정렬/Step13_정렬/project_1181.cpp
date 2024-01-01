//9. �ܾ� ����

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool sortbyLength(const string& a, const string& b);
vector<string> removeRepeat(vector<string> arr);

int main()
{
	int n;

	cin >> n;

	vector<string> arr;

	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;

		arr.push_back(str);
	}

	sort(arr.begin(), arr.end(), sortbyLength);	//����
	arr = removeRepeat(arr);					//�ߺ�����

	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << '\n';
	}

	return 0;
}

bool sortbyLength(const string& a, const string& b)	//���� ���� �������� ����
{
	if (a.length() == b.length())
		return a < b;
	else
		return a.length() < b.length();
}

vector<string> removeRepeat(vector<string> arr)	//���� �ߺ� �����Ͽ� ����
{
	vector<string> tmpArr = arr;

	for (int i = 1; i < tmpArr.size(); i++)
	{
		if (tmpArr[i] == tmpArr[i - 1])
		{
			tmpArr.erase(tmpArr.begin() + i, tmpArr.begin() + i + 1);
			i -= 1;

			continue;
		}
	}

	return tmpArr;
}