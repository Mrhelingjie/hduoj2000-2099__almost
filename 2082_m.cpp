#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include <set>
#include<math.h> 
#include <iostream>

using namespace std;

/*int main() {
	int T;
	
	while (cin >> T)
	{
		while (T--)
		{
			int ch[27] = { 0 };
			int c1[51] = { 0 }, c2[51] = { 0 };
			for (int i = 1; i < 27; i++) {
				cin >> ch[i];
			}
			c1[0] = 1;
			for (int i = 1; i <= 26; i++) {
				for (int j = 0; j <= 50; j++) {
					for (int k = 0; k <= ch[i] && j + k * i <= 50; k++) {
						c2[j + k * i] += c1[j];
					}
				}
				for (int t = 0; t <= 50; t++) {
					c1[t] = c2[t];
					c2[t] = 0;
				}
			}
			long long cnt = 0;
			for (int i = 1; i < 51; i++) {
				cnt += c1[i];
			}
			cout << cnt << endl;
		}

	}
	return 0;
}*/