#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;
//int line[510][510], boy[510], used[510];
///int  m, n;


/*int findpair(int x) {
	
	for (int i = 1; i <= n; i++)
	{
		if (line[x][i] == 1 && used[i] == 0) 
		{
			used[i] = 1;
			if (boy[i] == 0 || findpair(boy[i])) 
			{
				boy[i] = x;
				return 1;
			}
		}
	}
	return 0;
}*/
/*int main()
{
	int k, u, v, sum ;
	while(cin>>k>>m>>n&&k)
	{
		
		memset(boy, 0, sizeof(boy));
		memset(line, 0, sizeof(line));
		memset(used, 0, sizeof(used));

		while(k--){
			cin >> u >> v;	
			line[u][v] = 1;
		}
		sum = 0;
		for (int i = 1; i <= m; i++) {
			memset(used, 0, sizeof(used));
			if (findpair(i))sum++;
		}
		cout << sum << endl;
		
	}
	return 0;
}*/