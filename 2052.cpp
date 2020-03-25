#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>
#include <iomanip>
using namespace std;

/*int main() {
	int  n, m;

	while (cin >> m >> n) {
		getchar();
		vector<vector<char>> v;
		vector<char> start;
		vector<char> mid;
		start.push_back('+');
		mid.push_back('|');
		for (int i = 0; i < m; i++) {
			start.push_back('-');
			mid.push_back(' ');
		}
		start.push_back('+');
		mid.push_back('|');
		v.push_back(start);
		for (int i = 0; i < n; i++) {
			v.push_back(mid);
		}
		v.push_back(start);
		for (vector<char> item : v) {
			for (vector<char>::iterator p = item.begin(); p != item.end();p++) {
				if (p==item.end()-1)
				{
					cout << *p;
				}
				else 
				{
					cout << *p << " ";
				}
			}
			cout << endl;
			cout << endl;
			
		}
	}

	return 0;
}*/


