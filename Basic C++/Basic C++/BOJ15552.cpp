/*
* BOJ 15552 - ���� A+B 
* ����� 4
* 
* ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
* endl ��� '\n' �� ��!
*/

#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int T, a, b;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> a >> b;
		cout << a + b << '\n';
	}

	return 0;
}