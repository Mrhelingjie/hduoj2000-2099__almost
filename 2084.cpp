#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include <set>
#include<math.h> 
#include <iostream>

using namespace std;

/*int main() {
	int C,M, N, n;
	int vex[105][105] = { 0 };
	int dp[105][105] = { 0 };
	while (cin >> C)
	{
		while (C--)
		{
			cin >> N;
			for (int i = 1; i <= N; i++) {
				for (int j = 1; j <= i; j++) {
					cin >> vex[i][j];
				}
			}
			for (int i = 1; i <= N; i++) {
				dp[N][i] = vex[N][i];
			}
			for (int i = N - 1; i >= 1; i--) {
				for (int j = 1; j <= i; j++) {
					dp[i][j] = max(dp[i + 1][j] + vex[i][j], dp[i + 1][j + 1] + vex[i][j]);
				}
			}
			cout << dp[1][1] << endl;
		}

	}
	return 0;
}*/
