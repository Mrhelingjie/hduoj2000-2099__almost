#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include <iomanip>
#include<math.h>
const int INF = 0x3f3f3f3f;
using namespace std;

/*int main() {
	int pos[105] = { 0 };
	double dp[150] = { 0 }, rabbittime;
	int L, N, C, T, VR, VT1, VT2;
	while (cin >> L)
	{
		cin >> N >> C >> T;
		cin >> VR >> VT1 >> VT2;


		for (int i = 1; i <= N; i++)
			cin >> pos[i];

		pos[0] = 0;  //起点离起点的距离是0   

		pos[N + 1] = L;

		rabbittime = L * 1.0 / VR;

		for (int i = 1; i < 150; i++)
			dp[i] = INF;

		for (int i = 0; i < N + 1; i++) {
			for (int j = i + 1; j <= N + 1; j++) {
				int x, y;
				if (C > pos[j] - pos[i]) {
					x = pos[j] - pos[i];
					y = 0;
				}
				else {
					x = C;
					y = pos[j] - pos[i] - C;
				}
				if (i == 0) {
					dp[j] = min(dp[j], dp[i] + x * 1.0 / VT1 + y * 1.0 / VT2);
				}
				else {
					dp[j] = min(dp[j], dp[i] +T+ x * 1.0 / VT1 + y * 1.0 / VT2);
				}
			}
		}
		if (dp[N + 1] < rabbittime) {
			cout << "What a pity rabbit!" << endl;
		}
		else {
			cout << "Good job,rabbit!" << endl;
		}
	}
	return 0;
}*/
