/*
* BOJ 1547 - 공
* 브론즈 3
* 
* 컵의 위치를 나타내는 리스트를 만들면 됨. 
* l[컵 번호] = 컵의 위치 -> 컵의 위치가 1인 컵 번호를 찾으면 됨.
*/

#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int l[4] = {0, 1, 2, 3};

	int N, X, Y, tmp;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> X >> Y;
		tmp = l[X];
		l[X] = l[Y];
		l[Y] = tmp;
	}

	if (l[1] == 1)
		cout << 1;
	else if (l[2] == 1)
		cout << 2;
	else if (l[3] == 1)
		cout << 3;
	else
		cout << -1;

	return 0;
}
