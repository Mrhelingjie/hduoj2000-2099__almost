#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include <set>
#include<math.h> 
#include<iomanip>

using namespace std;

/*int main() {
	int T, m, n;
	string winner, loser;
	while (scanf_s("%d", &T) != EOF && T)
	{
		set<string> win;
		set<string> lose;
		while (T--)
		{
			cin >> winner >> loser;
			win.insert(winner);
			lose.insert(loser);
		}
		int flag = 0;
		for (set<string>::iterator p = win.begin(); p != win.end();p++) {
			if (lose.find(*p)==lose.end()) {
				++flag;
			}
		}
		if (flag == 1) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}
	}
	return 0;
}*/
