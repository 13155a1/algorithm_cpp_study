/*
* BOJ 1008 - A/B
* 브론즈 5
*/

#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	cout << fixed; // 소수점 자리 고정
	cout.precision(10); // 소수점 10번째 자리까지 출력

	double A, B;
	cin >> A >> B;
	cout << A / B;

	return 0;
}	