#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include <set>
#include<math.h> 
#include <iostream>
#include <sstream>
using namespace std;

/*int main() {
	int T, n, k, a,b;

	while (cin >> T)
	{
	
		while (T--)
		{
			int dp[41] = { 0 };
			int v[9][2] = { 0 };
			dp[0] = 1;
			cin >> n >> k;
			for(int i=1;i<=k;i++)
			{
				cin >> a >> b;
				v[i][0] = a;
				v[i][1] = b;
			}
			
			for (int i = 1; i <= k; i++) {
				for (int j = n; j >= v[i][0]; j--) {
					for (int k = 1; k <= v[i][1]; k++) {
						if (j - v[i][0] * k >= 0)dp[j] = dp[j] + dp[j - v[i][0] * k];
						else break;
					}
				}
			}		
			cout << dp[n] << endl;
		}

	}
	return 0;
}*/