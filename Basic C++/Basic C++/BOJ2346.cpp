/*
* BOJ 2346 - ǳ�� �Ͷ߸���
* �ǹ� 3
* 
* deque�� Ǯ���
*/

#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	vector<int> v; // v[ǳ�� ��ȣ] = ���̿� ���� �ִ� �� (1~N)
	deque<int> dq; // ���� ǳ�� (ó���� 1~N)
	int N, paper, move;
	
	cin >> N;
	
	// ���� �ʱ�ȭ
	v.push_back(0);
	for (int i = 0; i < N; i++) {
		cin >> paper;
		v.push_back(paper);
	}

	// ��ť �ʱ�ȭ
	for (int i = 1; i <= N; i++) {
		dq.push_back(i);
	}

	// ù ��° ǳ�� �Ͷ߸���
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

