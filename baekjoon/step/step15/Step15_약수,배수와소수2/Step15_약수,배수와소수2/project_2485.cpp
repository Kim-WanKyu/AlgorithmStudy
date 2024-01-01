//4. 가로수

#include <iostream>
#include <algorithm>

using namespace std;

int getGCD(int a, int b);

int main()
{
	int n;	//이미 심어진 가로수의 수
	cin >> n;

	int* trees = new int[n];	//이미 심어진 가로수의 위치
	for (int i = 0; i < n; i++)
	{
		cin >> trees[i];
	}

	sort(trees, trees + n);	//정렬

	int* intervals = new int[n - 1];	//각 가로수 간의 간격
	for (int i = 0; i <  n - 1; i++)
	{
		intervals[i] = trees[i + 1] - trees[i];
	}

	//최대 간격 구하기
	int maxInterval = intervals[0];
	for (int i = 1; i < n - 1; i++)
	{
		maxInterval = getGCD(maxInterval, intervals[i]);
	}

	//새로 심어질 가로수의 최소 개수 계산 및 출력
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