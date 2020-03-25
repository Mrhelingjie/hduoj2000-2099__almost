#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<vector> 
//#define M 1100
//#define INF 0x3f3f3f3f
using namespace std;

/*struct node {
	int v;
	int tt;
	node() {}

	node(int v, int tt) {
		this->v = v;
		this->tt = tt;
	}
};

vector<node>v[M];
int d[M], vis[M];
int city[M];
int n;
int T, S, D;

void Dijkstra() {
	memset(d, 0x3f, sizeof(d));
	memset(vis, 0, sizeof(vis));
	d[0] = 0;
	vis[0] = 1;
	int root = 0;
	for (int j = 0; j <= n; ++j) {
		int minLen = INF, p, len = v[root].size();
		for (int i = 0; i < len; ++i) {
			int u = v[root][i].v;
			if (!vis[u] && d[u] > d[root] + v[root][i].tt)
				d[u] = d[root] + v[root][i].tt;
		}//将所有的与ｒｏｏｔ节点连接的节点的距离进行更新

		for (int i = 0; i <= n + 1; ++i)//然后从０节点到所有的节点的最短的距离！
			if (!vis[i] && minLen > d[i]) {
				p = i;
				minLen = d[i];
			}
		if (minLen == INF)
			return;
		root = p;
		vis[root] = 1;
	}
}

int main() {
	while (cin >> S >> T >> D) {
		int a, b, t;
		n = -1;
		while (S--) {
			cin >> a >> b >> t;
			v[a].push_back(node(b, t));
			v[b].push_back(node(a, t));
			n = max(n, max(a, b));
		}
		while (T--) {
			cin >> a;
			v[0].push_back(node(a, 0));
			v[a].push_back(node(0, 0));
			n = max(n, a);
		}
		for (int i = 1; i <= D; ++i) {
			cin >> city[i];
			n = max(n, city[i]);
		}
		for (int i = 1; i <= D; ++i) {
			v[n + 1].push_back(node(city[i], INF));
			v[city[i]].push_back(node(n + 1, 0));
		}
		Dijkstra();
		for (int i = 0; i <= n + 1; ++i)
			v[i].clear();
		cout << d[n + 1] << endl;
	}
	return 0;
}*/