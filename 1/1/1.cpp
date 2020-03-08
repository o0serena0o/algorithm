#include <bits/stdc++.h>

using namespace std;

int n, m;

int main()
{
	cin >> n >> m;
	int pls = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i % m == 0)
		{
			pls = pls + i;
		}
	}
	cout << pls << endl;
}