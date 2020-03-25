#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



/*int main() {
	int m, n;
	int v[50][50] = { 0 };
	double  sc[50], avg[50], sum;
	while (scanf_s("%d%d", &n, &m) != EOF)
	{
		//成绩录入
		for (int i = 0; i < n; i++) {			
			for (int j = 0; j < m; j++) {
				scanf_s("%d", &v[i][j]);
			}
			
		}
		//计算每个学生的平均成绩
	
		for (int i = 0; i < n; i++) {
			sum = 0;
			for (int j = 0; j < m; j++) {
				sum = sum + v[i][j];
			}
			sc[i]=sum / m;
		}
		
		//每科平均
		
		for (int j = 0; j < m; j++) {
		    sum = 0;
			for (int i = 0; i < n; i++) {
				sum += v[i][j];
			}
			avg[j]=sum / n;
		}

		//compare
		int st_cnt = 0;
		for (int i = 0; i < n; i++)
		{
			int p = 1;
			for (int j = 0; j < m; j++)
				if (v[i][j] < avg[j])
				{
					p = 0;
					break;
				}
			if (p)
				st_cnt++;
		}

		for (int i = 0; i < n-1 ; i++)printf("%.2lf ",sc[i]);
		printf("%.2lf\n", sc[n-1]);
		for (int i= 0; i < m - 1; i++)printf("%.2lf ", avg[i]);
		printf("%.2lf\n", sc[n - 1]);
		printf("%d\n\n", st_cnt);
	}
}*/
