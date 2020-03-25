#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include <set>
#include<math.h> 
#include <iostream>

using namespace std;

/*int main() {
	int M,N,n;
	int getTotalLength(vector<int> v, int start);
	while (cin >>M )
	{
		while (M--)
		{
			cin >> N;
			vector<int>v;
			while (N--)
			{
				cin >> n;
				v.push_back(n);
			}
			sort(v.begin(), v.end());
			int index = 0;
			if (v.size() % 2 == 0) {
				index = (v.size() - 1) / 2;
			}
			else {
				index = v.size() / 2;
			}

			int len = min(getTotalLength(v, v[index]), getTotalLength(v, v[index + 1]));
			cout << len << endl;
		}

	}
	return 0;
}*/
int getTotalLength(vector<int> v, int start) {
	int re = 0;
	for (int item : v) {
		re = re + abs(start - item);
	}
	return re;
}