//11. ��ǥ ����

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int GetIndexByElement(const vector<int>& arr, int element);
int binarySearchIndex(const vector<int>& arr, int element);

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;

	cin >> n;

	vector<int> arrInput;
	vector<int> coordinate;

	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		arrInput.push_back(x);
		coordinate.push_back(x);
	}

	sort(coordinate.begin(), coordinate.end());
	coordinate.erase(unique(coordinate.begin(), coordinate.end()), coordinate.end());	//���� �ߺ� ���� �����ʼ�

	for (int i = 0; i < arrInput.size(); i++)
	{
		cout << GetIndexByElement(coordinate, arrInput[i]) << ' ';
	}

	return 0;
}

int GetIndexByElement(const vector<int>& arr, int element)
{
	return binarySearchIndex(arr, element);
}

int binarySearchIndex(const vector<int>& arr, int element)	//����Ž�� �� �ε��� ����
{
	int left = 0;
	int right = arr.size() - 1;

	while (left <= right) {
		int mid = (left + right) / 2;

		if (element == arr[mid])
			return mid;
		else if (element > arr[mid])
			left = mid + 1;
		else
			right = mid - 1;
	}

	return -1;
}