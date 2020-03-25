#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;

/*int main(void)
{
	int N,M;
	while (scanf_s("%d%d", &N,&M) != EOF)
	{
		//创建数列
		int start = 2;
		vector<int> v;
		for (int i = 0; i < N; i++) {
			v.push_back(start);
			start += 2;
		}
		int cnt = 0;
		double sum = 0;
		for (int i = 0; i < v.size(); i++) {
			sum = sum + v[i];
			cnt++;
			if (cnt == M) {
				printf("%.0f ", sum / M);
				sum = 0;
				cnt = 0;
			}
			if (cnt == M&&i==v.size()-1) {
				printf("%.0f\n", sum / M);
				sum = 0;
				cnt = 0;
			}
		}
		if (cnt != 0)printf("%.0f\n", sum / cnt);
		
	}
	return 0;

}*/

