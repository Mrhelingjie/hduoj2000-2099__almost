#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>
#include <iomanip>
using namespace std;

/*int main() {
	int c, n,m;
	int getC(int xia, int shang);
	long long v[21];
	v[0] = 0;
	v[1] = 0;
	v[2] = 1;
	v[3] = 2;
	v[4] = 9;
	for (int i = 5; i < 21; i++) {
		v[i] = (i - 1)*(v[i - 1] + v[i - 2]);
	}
	while (cin >> c) {
		getchar();
		while (c--) {
			
			cin >> n >> m;
			//!n
			long long s = getC(n, n - m)*v[m];
			
			cout  << s <<  endl;

		}
	}
	return 0;
}*/
/*int getC(int n, int m) {
	long long s1 = 1, s2 = 1;
	for (int i = 1; i <= m; i++) {
		s1 = s1 * (n - i + 1);
		s2 = s2 * i;
	}
	return s1 / s2;
}*/

