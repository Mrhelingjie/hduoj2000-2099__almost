#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*int main() {
	int m, n, val;
	while (scanf_s("%d%d", &m,&n) != EOF )
	{
		vector<vector<int>> v;
		for (int i = 0; i < m; i++) {
			vector<int> row;
			for (int j = 0; j < n; j++) {
				scanf_s("%d", &val);
				row.push_back(val);
			}
			v.push_back(row);
		}

		int r_index = 0, c_index = 0, sc = 0;
		for (int i = 0; i < m; i++) {
			for (int j = 0; j <n; j++) {
				if (abs(v[r_index][c_index]) < abs(v[i][j])) {
					r_index = i;
					c_index = j;
				}
			}
		}
		printf("%d %d %d", r_index+1, c_index+1, v[r_index][c_index]);
		
	}
}*/
