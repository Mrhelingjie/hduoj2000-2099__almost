#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;

/*int main()
{
	int t;
	long long N;
	int PowMod(int a, long long b);
	while (cin>>t&&t)
	{
		int caseNum = 1;
		while (t--)
		{
			
			cin >> N;
			cout << "Case " << caseNum++ << ": " << ((PowMod(4, N - 1) + PowMod(2, N - 1)) % 100) << endl;
		}
		cout << endl;
	}
	return 0;
}*/
int PowMod(int a, long long b)
{
	int ret = 1;
	while (b)
	{
		if (b & 1)
			ret = (ret*a) % 100;
		a = (a*a) % 100;
		b >>= 1;
	}
	return ret;
}
