#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>


using namespace std;

/*int main(void)
{

	int N;

	//bool judgenum(int num);
	double addarr(int n);
	while (scanf_s("%d", &N) != EOF)
	{
		while (N>0)
		{
			int tmp;
			scanf_s("%d", &tmp);
			double result = addarr(tmp);
			printf("%.2f\n", result);
			N--;
		}
	}
	return 0;

}*/
double addarr(int n) {
	double re = 0;
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			re = re - 1 / (double)i;
		}
		else {
			re = re + 1 / (double)i;
		}
	}
	return re;
}
