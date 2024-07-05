/*
* BOJ 9093 - �ܾ� ������
* ����� 1
* 
* �׳� reverse ���� �� ��?
* + string ���̺귯���� getline(cin, str)
* stringstream >> word �ϸ� ���� �������� �߶� ����
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
	cin.ignore(); // �Է� ������ '\n' ����

	for (int i = 0; i < T; i++) {
		string s, w;
		getline(cin, s);
		stringstream ss(s);

		// �� �ܾ ����� ���
		while (ss >> w) {
			reverse(w.begin(), w.end());
			cout << w << " ";
		}

		cout << '\n';
	}

	return 0;
}