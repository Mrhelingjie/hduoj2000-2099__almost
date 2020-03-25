#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

/*int main() {
	int num;
	while (cin >> num) {
		vector<vector<int>> v;
		vector<int> toput = { 1 };
		vector<int> toput1 = { 1 ,1 };
		v.push_back(toput);
		v.push_back(toput1);
		for (int i = 2; i < num; i++) {
			vector<int> cv(i + 1);
			cv[0] = 1; cv[i] = 1;
			for (int j = 1; j < i; j++) {
				cv[j] = v[i - 1][j - 1] + v[i - 1][j];
			}
			v.push_back(cv);
		}
		for (int i = 0; i < num; i++) {
			for (int j = 0; j < v[i].size(); j++) {
				if(j== v[i].size()-1) cout << v[i][j];
				else cout << v[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}

	return 0;
}*/