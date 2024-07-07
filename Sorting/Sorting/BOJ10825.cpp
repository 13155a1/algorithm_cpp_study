/*
* BOJ 10825 - ������
* �ǹ� 4
* 
* �� �Լ� ���� ����
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<string, vector<int>> s1, pair<string, vector<int>> s2) {
	if (s1.second[0] == s2.second[0]) { 
		if (s1.second[1] == s2.second[1]) {
			if (s1.second[2] == s2.second[2]) { // �̸��� ���� ������ �����ϴ� ������ (��������)
				return s1.first < s2.first;
			}
			else { // ���� ������ �����ϴ� ������ (��������)
				return s1.second[2] > s2.second[2];
			}
		}
		else { // ���� ������ �����ϴ� ������ (��������)
			return s1.second[1] < s2.second[1];
		}
	}
	else { // ���� ������ �����ϴ� ������ (��������)
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