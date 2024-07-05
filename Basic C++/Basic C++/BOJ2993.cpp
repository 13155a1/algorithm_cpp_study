/*
* BOJ 2993 - �� �κ�
* �ǹ� 5
* ���Ʈ����? 
* ���� ������ �տ� �ִ� �� �ٷ� �ڿ��� �ڸ��� �� �� ����. -> �̷��� �ߴ���, ���� ������ �տ� ���� ���ڰ� �� �ڿ� �ְų� �ϸ� �� �κ��� �� �������.
* �׳� ���Ʈ������ Ǯ��... (for�� �� ���� �� ���� �ܾ ����)
* 
* string ans(size, 'z') �ϸ� z�� size��ŭ ä�� ���ڿ� ������ �� �ְ�,
* reverse(first, last); �ϸ� first~last-1 �ε�����ŭ ������
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
				// 0 ~ i, ���� i - 0 + 1
				for (int a = 0; a < (i - 0 + 1) / 2; a++) {
					tmp = s[0 + a];
					s[0 + a] = s[i - a];
					s[i - a] = tmp;
				}

				// i + 1 ~ j, ���� j - (i + 1) + 1
				for (int a = 0; a < (j - (i + 1) + 1) / 2; a++) {
					tmp = s[i + 1 + a];
					s[i + 1 + a] = s[j - a];
					s[j - a] = tmp;
				}

				// j + 1 ~ len - 1, ���� len - 1 - (j + 1) + 1
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