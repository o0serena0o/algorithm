#include <bits/stdc++.h>

using namespace std;

int ch[30], dist[30];

vector<pair<int, int>> z[30];

int main()
{
	int n, m, i, j, a, b, c, min;
	cin >> n >> m;
	
	for (i = 1; i <= m; i++)
	{
		cin >> a >> b >> c;
		z[a].push_back(make_pair(b, c));
	}
	for (i = 0; i <= n; i++) dist[i] = 2147000000;
	dist[1] = 0;
	for (i = 1; i <= n; i++)
	{
		min = 0;
		for (j = 1; j <= n; j++)
		{
			if (ch[j] == 0 && dist[j] < dist[min])
				min = j;
		}
		ch[min] = 1;
		for (j = 0; j < z[min].size(); j++)
		{
			int v = z[min][j].x;
			int cost = z[min][j].y;
			if (dist[v] > dist[min] + cost)
			{
				dist[v] = dist[min] + cost;
			}
		}
	}
	for (i = 2; i <= n; i++)
	{
		if (dist[i] != 2147000000) cout << i << ':' << dist[i] << endl;
		else cout << i << "impossible" << endl;
	}
	return 0;
}