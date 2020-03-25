#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;

/*int main(void)
{
	int N,tmp;
	while (scanf_s("%d", &N) != EOF&&N!=0)
	{
		//创建数列
		vector<int> v;
		for (int i = 0; i < N; i++) {
			scanf_s("%d", &tmp);
			v.push_back(tmp);
		}
		int min_ind = 0;
		for (int i = 0; i < N; i++) {
			if (v[i] < v[min_ind]) {
				min_ind = i;
			}
		}
		//swap
		tmp = v[0];
		v[0] = v[min_ind];
		v[min_ind] = tmp;
		for (int i = 0; i < N-1; i++) {
			printf("%d ", v[i]);
		}
		printf("%d\n", v[N-1]);
	}
	return 0;

}
*/
