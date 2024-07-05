/*
* BOJ 1158 - 요세푸스 문제
* 실버 4
*/

#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int N, K, tmp;
	cin >> N >> K;

	queue<int> q;

	for (int i = 1; i <= N; i++)
		q.push(i);

	cout << "<";
	while (q.size() > 1) {
		for (int i = 0; i < K - 1; i++) {
			tmp = q.front();
			q.pop();
			q.push(tmp);
		}

		cout << q.front() << ", ";
		q.pop();
	}

	cout << q.front() << ">";
	q.pop();

	return 0;

}