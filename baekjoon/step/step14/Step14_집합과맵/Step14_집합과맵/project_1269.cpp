//7. 대칭 차집합

#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int sizeA, sizeB;

	cin >> sizeA >> sizeB;

	set<int> setA, setB;
	
	for (int i = 0; i < sizeA; i++)
	{
		int element;
		cin >> element;
		setA.insert(element);
	}
	for (int i = 0; i < sizeB; i++)
	{
		int element;
		cin >> element;
		setB.insert(element);
	}

	int sumCount = 0;

	for (auto e : setA)
	{
		if (setB.find(e) != setB.end())
		{
			sumCount++;
		}
	}
	
	int count = setA.size() + setB.size() - 2 * sumCount;
	
	cout << count;

	return 0;
}