/*
* BOJ 10804 - 카드 역배치
* 브론즈 2
* 
* 맨 앞과 맨 뒤, 그 다음과 그 전 이렇게 바꾸면 된다.
*/



#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int l[21];
	int tmp, a, b, length;

	for (int i = 0; i < 21; i++) {
		l[i] = i;
	}

	for (int i = 0; i < 10; i++) {
		cin >> a >> b;

		length = b - a + 1; // (길이/2) 만큼 swap이 발생

		for (int j = 0; j < length / 2; j++) {
			// a + j랑 b - j랑 바꾸면 됨
			tmp = l[a + j];
			l[a + j] = l[b - j];
			l[b - j] = tmp;
		}
	}

	for (int i = 1; i <= 20; i++)
		cout << l[i] << " ";
	cout << '\n';

	return 0;
}