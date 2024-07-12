/*
* BOJ 1448 - �ﰢ�� �����
* �ǹ� 3
* 
* ���� �� ������� �����ؼ� A >= B + C�̸� �������� �Ѿ
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int n, tmp, sum = -1;
	vector<int> v;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		v.push_back(tmp);
	}

	sort(v.begin(), v.end(), greater<>());

	for (int i = 0; i < n - 2; i++) {
		if (v[i] < v[i + 1] + v[i + 2]) {
			sum = v[i] + v[i + 1] + v[i + 2];
			break;
		}
	}

	cout << sum << '\n';

	return 0;
}