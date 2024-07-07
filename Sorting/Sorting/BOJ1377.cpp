/*
* BOJ 1377 - 버블 소트
* 골드 2
* 
* i번째 턴에서 정렬이 완료됨
* 
* 정렬된 리스트의 앞에서부터 봤을 때 뒤에 애들이 얼마나 사이사이에 끼여 있나를 찾으면 되 나  .. ? -> 안 됨 ㅠ
* 
* 한 번 돌 때, 배열의 각 요소들은 뒤로는 계속 이동할 수 있으나 앞으로는 딱 한 번만 이동할 수 있음
-> 인덱스의 차이의 최댓값만큼은 무조건 움직였어야 함.
-> 인덱스의 차이의 최댓값 + 1이 답이다.
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>
using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	vector<int> v, sort_v;
	map<int, int> m; // m[숫자] = 정렬 후 인덱스
	int n, tmp, max_diff = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp; 
		v.push_back(tmp);
		sort_v.push_back(tmp);
	}

	sort(sort_v.begin(), sort_v.end());
	for (int i = 0; i < n; i++) {
		m[sort_v[i]] = i;
	}

	for (int i = 0; i < n; i++) {
		if ((i - m[v[i]]) > max_diff)
			max_diff = i - m[v[i]];
	}

	cout << max_diff + 1 << '\n';

	return 0;
}