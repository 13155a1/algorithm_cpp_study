/*
* BOJ 2437 - ����
* ��� 2
* 
* ���� ������ �ִ� �߷� 1~k�� ���� �� �ִ� ��Ȳ����, ���� ���� ���� ���԰� K+1���� ũ�� K+1�� ���� �� ����.
* @@@@@@@@@@ �̰� K��� �ϸ�, 
* ���� ���� ���԰� ##### �̷��� K���� �۰ų� ������
* @@@@@@@@@@
*       ##### �̷��� K+1�� ���� �� �ִ�.
* �׷���, ���� ���԰� ############### �̷��� K���� ũ��
* @@@@@@@@@@
* ############### �̷��� K+1�� ���� ���� ����.
* 
* K+1�� ������?
* @@@@@@@@@@
* ########### ���� �� �ִ�.
* 
* ������? K + ���� ���� ���Ա���!
*/


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int n, tmp, sum = 0;
	vector<int> v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		v.push_back(tmp);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++) {
		if (v[i] > sum + 1) {
			break;
		}

		sum += v[i];
	}

	cout << sum + 1 << '\n';


	return 0;
}