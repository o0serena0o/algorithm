#include <bits/stdc++.h>

using namespace std;

int n;

int main()
{
	cin >> n;
	int pls = 1;
	cout << 1;
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			pls = pls + i;
			cout << '+' << i;
		}
	}
	cout << '=' << pls;
}