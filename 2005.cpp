#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
#pragma warning(disable:4996)

using namespace std;

/*int main(void)
{
	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int y = 0, m = 0, day = 0, sum;
	while (scanf("%d/%d/%d", &y, &m, &day) != EOF)
	{
		sum = 0;
		for (int i = 0; i < m ; i++) {
			sum = sum + days[i];
		}
		if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
			if (m >2) {
				sum++;
			}
		}
		sum = sum + day;
		printf("%d\n", sum);
	}
	return 0;
}*/