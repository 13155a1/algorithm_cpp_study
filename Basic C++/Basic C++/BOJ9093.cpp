/*
* BOJ 9093 - 단어 뒤집기
* 브론즈 1
* 
* 그냥 reverse 쓰면 될 듯?
* + string 라이브러리의 getline(cin, str)
* stringstream >> word 하면 공백 기준으로 잘라서 나옴
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int T;
	cin >> T;
	cin.ignore(); // 입력 버퍼의 '\n' 제거

	for (int i = 0; i < T; i++) {
		string s, w;
		getline(cin, s);
		stringstream ss(s);

		// 각 단어를 뒤집어서 출력
		while (ss >> w) {
			reverse(w.begin(), w.end());
			cout << w << " ";
		}

		cout << '\n';
	}

	return 0;
}