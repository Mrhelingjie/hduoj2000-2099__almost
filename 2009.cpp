#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>


using namespace std;

/*int main(void)
{

	int N, M;
	
	bool judgenum(int num);
	while (scanf_s("%d%d", &N, &M) != EOF )
	{
		vector<int> v;
		int cnt = 0;
		for (int i = N; i <= M; i++) {
			if (judgenum(i)) {
				v.push_back(i);
				cnt++;
			}
		}
		if (cnt == 0) {
			printf("no");
		}
		vector<int>::iterator it = v.begin();
		while (it!=v.end())
		{
			if (it==v.end()-1)
			{
				cout << *it++;
			}
			else 
			{
				cout << *it ++<< " ";
			}
		}
		cout << endl;
	}
	return 0;

}
bool judgenum(int num) {
	int bai = num / 100;
	int shi = (num - bai * 100) / 10;
	int ge = num - bai * 100 - shi * 10;
	if ((bai*bai*bai + shi * shi*shi + ge * ge*ge) == num) {
		return true;
	}
	else
	{
		return false;
	}
}*/