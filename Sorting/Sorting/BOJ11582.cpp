/*
* BOJ 11582 - ġŲ TOP N
* �ǹ� 4
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int n, m, tmp, len;
	vector<int> v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		v.push_back(tmp);
	}
	cin >> m;

	len = n / m; // ������ ������ ����

	for (int i = 0; i < m; i++) {
		sort(v.begin() + (i * len), v.begin() + (i * len) + len);
	}

	for (int i = 0; i < n; i++)
		cout << v[i] << " ";
	cout << '\n';

	return 0;

}