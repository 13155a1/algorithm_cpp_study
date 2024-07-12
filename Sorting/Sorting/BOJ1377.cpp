/*
* BOJ 1377 - ���� ��Ʈ
* ��� 2
* 
* i��° �Ͽ��� ������ �Ϸ��
* 
* ���ĵ� ����Ʈ�� �տ������� ���� �� �ڿ� �ֵ��� �󸶳� ���̻��̿� ���� �ֳ��� ã���� �� ��  .. ? -> �� �� ��
* 
* �� �� �� ��, �迭�� �� ��ҵ��� �ڷδ� ��� �̵��� �� ������ �����δ� �� �� ���� �̵��� �� ����
-> �ε����� ������ �ִ񰪸�ŭ�� ������ ��������� ��.
-> �ε����� ������ �ִ� + 1�� ���̴�.
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
	map<int, int> m; // m[����] = ���� �� �ε���
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