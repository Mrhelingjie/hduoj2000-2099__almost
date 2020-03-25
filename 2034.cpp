#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

/*int main() {
	int m,n;
	while (cin >> m>>n) {
		if (m == 0 && n == 0) break;
		if (m == 0) {
			cout << "NULL" << endl;
			break;
		}
		vector<int> v1(m);
		vector<int> v2(n);
		vector<int> v3;
		for (int i = 0; i < m; i++) {
			cin >> v1[i];
		}
		for (int i = 0; i < n; i++) {
			cin >> v2[i];
		}
		sort(v1.begin(), v1.end());
		sort(v2.begin(), v2.end());
		vector<int>::iterator p;
		for (int i = 0; i < m; i++) {
			p = find(v2.begin(), v2.end(), v1[i]);
			if (p == v2.end()) {
				v3.push_back(v1[i]);
			}
		}
		if (v3.empty()) {
			cout << "NULL" << endl;
		}
		else {
			for (int i = 0; i < v3.size(); i++) {
				cout << v3[i] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}*/