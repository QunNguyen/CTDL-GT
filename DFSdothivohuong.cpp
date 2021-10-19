#include<bits/stdc++.h>
using namespace std;
int a[1005][1005], n, m, u;
bool chuaxet[1005];

void DFS(int u) {
	cout << u << " ";
	chuaxet[u] = false;
	for (int i = 1; i <= n; i++)
		if (chuaxet[i]==true  && a[u][i] ==1)
			DFS(i);
}
main() {
	int t, i, x, y;
	cin >> t;
	while (t--) {
		cin >> n >> m >> u;
		memset(a, 0, sizeof(a));
		memset(chuaxet, true, sizeof(chuaxet));
		for (i = 0; i < m; i++) {
			cin >> x >> y;
			a[x][y] = 1;
			a[y][x] = 1;
		}
		DFS(u);
		cout << endl;
	}
}