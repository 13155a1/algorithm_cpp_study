/*
* BOJ 1008 - A/B
* ����� 5
*/

#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	cout << fixed; // �Ҽ��� �ڸ� ����
	cout.precision(10); // �Ҽ��� 10��° �ڸ����� ���

	double A, B;
	cin >> A >> B;
	cout << A / B;

	return 0;
}	