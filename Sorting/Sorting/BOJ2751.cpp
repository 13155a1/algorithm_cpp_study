/*
* BOJ 2751 - �� �����ϱ� 2
* �ǹ� 5
* 
* �׳� �������� ����
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	vector<int> v;
	int n, tmp;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		v.push_back(tmp);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++) {
		cout << v[i] << '\n';
	}

	return 0;
}