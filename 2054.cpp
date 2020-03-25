#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>
#include <iomanip>
using namespace std;

/*int main() {
	string m,n;
	bool checkpoint(vector<char>v);
	while (cin >> m >> n) {
		getchar();
		bool flag = true;
		vector<char> mstr(m.begin(), m.end());
		vector<char> nstr(n.begin(), n.end());
		vector<char>::iterator p = mstr.begin(), q = nstr.begin();
		vector<char>::iterator ptail = mstr.end()-1, qtail = nstr.end()-1;
		if (checkpoint(mstr)) {
			while (*ptail == '0')ptail--;
			if (*ptail == '.')ptail--;
		}
		if (checkpoint(nstr)) {
			while (*qtail == '0')qtail--;
			if (*qtail == '.')qtail--;
		}
		
		while (p != ptail && q !=qtail) {
			if (*p == *q) {
				p++;
				q++;
			}
			else {
				flag = false;
				break;
			}
		}
		
		if (flag&& p == ptail && q == qtail) //&& p == ptail && q == qtail
		{
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}

	}
	return 0;
}
bool checkpoint(vector<char>v) {
	for (auto c : v) {
		if (c == '.')return true;
	}
	return false;
}*/