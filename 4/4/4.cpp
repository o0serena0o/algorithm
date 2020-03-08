#include <bits/stdc++.h>

using namespace std;

int n;

int main()
{
	cin >> n;
	int old = 0;
	int young = 100;
	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		old = max(old, k);
		young = min(young, k);
	}
	int ans = old - young;
	cout << ans;
}