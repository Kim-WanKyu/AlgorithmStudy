//1. 숫자 카드

#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, m;

	set<int> card;	//집합과 같다. 중복 허용 x인 자료형으로 같은 원소는 없고, 정렬되어있는 컨테이너이다.

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		card.insert(num); //삽입
	}

	cin >> m;

	for (int i = 0; i < m; i++)
	{
		int findingNum;
		cin >> findingNum;
		cout << card.count(findingNum) << ' ';	//.count(element) 는 set에 해당 element가 있으면 1 아니면 0을 리턴한다.
	}
	
	return 0;
}