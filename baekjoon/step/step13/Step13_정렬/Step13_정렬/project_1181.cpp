//9. 단어 정렬

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

	sort(arr.begin(), arr.end(), sortbyLength);	//정렬
	arr = removeRepeat(arr);					//중복제거

	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << '\n';
	}

	return 0;
}

bool sortbyLength(const string& a, const string& b)	//길이 기준 오름차순 정렬
{
	if (a.length() == b.length())
		return a < b;
	else
		return a.length() < b.length();
}

vector<string> removeRepeat(vector<string> arr)	//벡터 중복 제거하여 리턴
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