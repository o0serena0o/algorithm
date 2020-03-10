#include <bits/stdc++.h>

using namespace std;

char a[60];
int res, cnt;

int main()
{
	cin >> a;
	for (int i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 48 && a[i] <= 57)
		{
			res = res * 10 + (a[i] - 48);
		}
	}
	cout << res << endl;
	for (int i = 1; i <= res; i++)
	{
		if (res % i == 0) cnt++;
	}
	cout << cnt << endl;
	return 0;
}