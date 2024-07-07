/*
* BOJ 10610 - 30
* �ǹ� 4
* 
* <��� ������>
* 3�� ��� ������ - ��� �ڸ� ���� ���� 3�� ����̴�
* 
* => ��� �ڸ� ���� ���ؼ� ���� 3�� ��� + ������ �ڸ� 0
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	string s;
	int tmp, sum;
	bool zero_exist = false;
	vector<int> v;
	
	cin >> s;
	
	for (int i = 0; i < s.size(); i++) {
		v.push_back(s[i] - '0');
		if (s[i] == '0')
			zero_exist = true;
	}

	if (zero_exist) {
		sum = 0;
		for (int i = 0; i < v.size(); i++)
			sum += v[i];
		
		if (sum % 3 == 0) {
			sort(v.begin(), v.end(), greater<>());

			for (int i = 0; i < v.size(); i++)
				cout << v[i];
			cout << '\n';
		}
		else {
			cout << -1 << '\n';
		}
	}
	else {
		cout << -1 << '\n';
	}
	
	return 0;
}

