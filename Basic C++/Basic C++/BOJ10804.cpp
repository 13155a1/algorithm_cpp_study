/*
* BOJ 10804 - ī�� ����ġ
* ����� 2
* 
* �� �հ� �� ��, �� ������ �� �� �̷��� �ٲٸ� �ȴ�.
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

		length = b - a + 1; // (����/2) ��ŭ swap�� �߻�

		for (int j = 0; j < length / 2; j++) {
			// a + j�� b - j�� �ٲٸ� ��
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