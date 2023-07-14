//8. 세 막대

#include <iostream>

using namespace std;

int main()
{
	int a, b, c;

	cin >> a >> b >> c;

	int originMax = (a > b ? a : b) > c ? (a > b ? a : b) : c;	//제일 긴 변의 원래 길이

	if (originMax >= a + b + c - originMax)	//삼각형이 되지 않으면, (제일 긴 변의 길이가 나머지 두 변의 길이의 합보다 크거나 같은 경우)
	{
		int changedMax = a + b + c - originMax - 1;	//제일 긴 변의 줄어든 길이
		int diff = originMax - changedMax;			//제일 긴 변의 원래 길이와 줄어든 길이의 차이

		cout << a + b + c - diff;
	}
	else
	{
		cout << a + b + c;
	}

	return 0;
}