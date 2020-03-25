#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;
typedef pair<int, int> pairInt;

/*int main() {
	int n;
	bool cmp_pairInt(pairInt a, pairInt b);
	while (cin >> n) {
		if (n == 0) {
			break;
		}
		vector<pairInt> vec;
		int st, en;
		for (int i = 0; i < n; i++) {
			cin >> st >> en;
			vec.push_back(make_pair(st, en));
		}
		sort(vec.begin(), vec.end(), cmp_pairInt);
		int now = 0, cnt = 0;
		for (int i = 0; i < n; i++) {
			if (now <= vec[i].first) {
				now = vec[i].second;
				cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
bool cmp_pairInt(pairInt a, pairInt b) {
	return a.second < b.second;
}*/