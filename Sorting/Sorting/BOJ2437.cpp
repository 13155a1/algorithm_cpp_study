/*
* BOJ 2437 - 저울
* 골드 2
* 
* 내가 가지고 있는 추로 1~k를 만들 수 있는 상황에서, 다음 무게 추의 무게가 K+1보다 크면 K+1을 만들 수 없다.
* @@@@@@@@@@ 이게 K라고 하면, 
* 다음 추의 무게가 ##### 이렇게 K보다 작거나 같으면
* @@@@@@@@@@
*       ##### 이렇게 K+1을 만들 수 있다.
* 그러나, 추의 무게가 ############### 이렇게 K보다 크면
* @@@@@@@@@@
* ############### 이래서 K+1을 만들 수가 없다.
* 
* K+1과 같으면?
* @@@@@@@@@@
* ########### 만들 수 있다.
* 
* 어디까지? K + 다음 추의 무게까지!
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