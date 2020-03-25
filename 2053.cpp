#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>
#include <iomanip>
using namespace std;

/*int main() {
	int  m;
	int getCNT(int n);
	while (cin >> m ) {
		getchar();
		
		//time limit
		// vector<int> v(m, 1);
		//for(int i=2;i<=m;i++){
		//	for (int j = 1; j < v.size();j++) {
		//		if ((j+1)%i == 0) {
		//			v[j] = (v[j] + 1) % 2;
		//		}
		//	}
		//}
		cout << v[v.size() - 1] << endl;
		cout << getCNT(m) % 2 << endl;
	}

	return 0;
}*/
int getCNT(int n) {
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		if (n%i == 0) {
			cnt++;
		}
	}
	return cnt;
}

