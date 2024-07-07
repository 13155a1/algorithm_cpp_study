/*
* BOJ 1448 - 삼각형 만들기
* 실버 3
* 
* 가장 긴 순서대로 정렬해서 A >= B + C이면 다음으로 넘어감
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