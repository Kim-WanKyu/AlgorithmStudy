//3. 세로읽기

#include <iostream>
#include <string>

using namespace std;

int main()
{
	//제일 긴 문자열 기준만큼 출력하기 위한 변수
	int longest = 0;

	//문자열 배열 동적 할당 및 값 입력
	string* arr = new string[5];
	for (int i = 0; i < 5; i++)
	{
		string tmpStr;
		cin >> tmpStr;
		arr[i] = tmpStr;
		longest = longest >= tmpStr.length() ? longest : tmpStr.length();
	}

	//결과 출력
	for (int j = 0; j < longest; j++)
	{
		for (int i = 0; i < 5; i++)
		{
			if (j < arr[i].length())	//출력하려는 문자의 인덱스가 출력하려는 해당 문자가 포함된 문자열의 길이보다 작아야 출력 아니면 널이기 때문
				cout << arr[i].at(j);
		}
	}

	//문자열 배열 할당 해제
	delete[] arr;

	return 0;
}