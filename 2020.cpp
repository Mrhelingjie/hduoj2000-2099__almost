#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*int main() {
	int n, val;
	bool cmp(int x, int y);
	while (scanf_s("%d",&n)!=EOF&&n!=0)
	{
		vector<int> v;
		while (n--) {
			scanf_s("%d", &val);
			v.push_back(val);
		}
		sort(v.begin(), v.end(), cmp);
		vector<int>::iterator p;
		for (p = v.begin(); p != v.end();p++) {
			if (p + 1 == v.end()) {
				printf("%d\n", *p);
			}
			else
			{
				printf("%d ", *p);
			}
		}
	}
}*/
bool cmp(int x, int y) {
	return abs(x) > abs(y);
}