/*
* BOJ 10825 - 국영수
* 실버 4
* 
* 비교 함수 쓰는 문제
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<string, vector<int>> s1, pair<string, vector<int>> s2) {
	if (s1.second[0] == s2.second[0]) { 
		if (s1.second[1] == s2.second[1]) {
			if (s1.second[2] == s2.second[2]) { // 이름이 사전 순으로 증가하는 순서로 (오름차순)
				return s1.first < s2.first;
			}
			else { // 수학 점수가 감소하는 순서로 (내림차순)
				return s1.second[2] > s2.second[2];
			}
		}
		else { // 영어 점수가 증가하는 순서로 (오름차순)
			return s1.second[1] < s2.second[1];
		}
	}
	else { // 국어 점수가 감소하는 순서로 (내림차순)
		return s1.second[0] > s2.second[0];
	}
}

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	vector<pair<string, vector<int>>> v;
	pair<string, vector<int>> student; student.second = { 0, 0, 0 };
	int n, score;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> student.first;
		cin >> score; student.second[0] = score;
		cin >> score; student.second[1] = score;
		cin >> score; student.second[2] = score;

		v.push_back(student);

	}

	sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < n; i++)
		cout << v[i].first << '\n';

	return 0;
}