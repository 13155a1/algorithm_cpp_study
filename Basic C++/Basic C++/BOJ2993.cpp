/*
* BOJ 2993 - 세 부분
* 실버 5
* 브루트포스? 
* 사전 순으로 앞에 있는 거 바로 뒤에서 자르면 될 것 같음. -> 이렇게 했더니, 사전 순으로 앞에 오는 문자가 맨 뒤에 있거나 하면 세 부분이 안 만들어짐.
* 그냥 브루트포스로 풀자... (for문 세 개로 세 개의 단어를 나눔)
* 
* string ans(size, 'z') 하면 z로 size만큼 채운 문자열 생성할 수 있고,
* reverse(first, last); 하면 first~last-1 인덱스만큼 뒤집음
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	char tmp;
	string min_str = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";


	string input_str;
	int len;
	cin >> input_str;
	len = input_str.size();
	for (int i = 0; i < len - 2; i++) {
		for (int j = i + 1; j < len - 1; j++) {
				string s(input_str);
				// 0 ~ i, 길이 i - 0 + 1
				for (int a = 0; a < (i - 0 + 1) / 2; a++) {
					tmp = s[0 + a];
					s[0 + a] = s[i - a];
					s[i - a] = tmp;
				}

				// i + 1 ~ j, 길이 j - (i + 1) + 1
				for (int a = 0; a < (j - (i + 1) + 1) / 2; a++) {
					tmp = s[i + 1 + a];
					s[i + 1 + a] = s[j - a];
					s[j - a] = tmp;
				}

				// j + 1 ~ len - 1, 길이 len - 1 - (j + 1) + 1
				for (int a = 0; a < (len - 1 - (j + 1) + 1) / 2; a++) {
					tmp = s[j + 1 + a];
					s[j + 1 + a] = s[len - 1 - a];
					s[len - 1 - a] = tmp;
				}

				if (s < min_str)
					min_str = s;
		}
	}

	cout << min_str << '\n';

	return 0;
}