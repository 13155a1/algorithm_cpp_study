/*
* BOJ 2346 - 풍선 터뜨리기
* 실버 3
* 
* deque로 풀면댐
*/

#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	vector<int> v; // v[풍선 번호] = 종이에 적혀 있는 수 (1~N)
	deque<int> dq; // 현재 풍선 (처음에 1~N)
	int N, paper, move;
	
	cin >> N;
	
	// 벡터 초기화
	v.push_back(0);
	for (int i = 0; i < N; i++) {
		cin >> paper;
		v.push_back(paper);
	}

	// 디큐 초기화
	for (int i = 1; i <= N; i++) {
		dq.push_back(i);
	}

	// 첫 번째 풍선 터뜨리기
	move = v[1];
	cout << 1 << " ";
	dq.pop_front();

	while (!dq.empty()) {

		if (move > 0) {
			for (int i = 0; i < move - 1; i++) {
				dq.push_back(dq.front());
				dq.pop_front();
			}
		}
		else if (move < 0) {
			for (int i = 0; i < move * (-1); i++) {
				dq.push_front(dq.back());
				dq.pop_back();
			}
		}
		else
			;

		move = v[dq.front()];
		cout << dq.front() << " ";
		dq.pop_front();
	}

	cout << '\n';

	return 0;
}

