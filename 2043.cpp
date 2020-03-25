#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

/*int main() {
	int n;
	string str;
	while (cin >> n) {
		getchar();
		while (n--)
		{
			cin >> str;
			vector<char> v(str.begin(), str.end());
			if (v.size() >= 8 && v.size() <= 16) {
				int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
				for (int i = 0; i < v.size(); i++) {
					if (v[i] >= 'A'&&v[i] <= 'Z'&&cnt1 == 0) {
						cnt1++;
					}
					if (v[i] >= 'a'&&v[i] <= 'z'&&cnt2 == 0) {
						cnt2++;
					}
					if (v[i] >= '0'&&v[i] <= '9'&&cnt3 == 0) {
						cnt3++;
					}
					if ((v[i] == '~'||v[i] =='!' || v[i] == '@' || v[i] == '#' || v[i] == '$' || v[i] == '%'|| v[i] == '^')&&cnt4 == 0) {
						cnt4++;
					}
				}
				if ((cnt1 + cnt2 + cnt3 + cnt4) >= 3) {
					cout << "YES" << endl;
				}
				else {
					cout << "NO" << endl;
				}
			}
			else {
				cout << "NO" << endl;
			}
		}
	}
	return 0;
}*/
