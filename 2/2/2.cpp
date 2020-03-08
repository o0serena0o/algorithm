#include <bits/stdc++.h>

using namespace std;

int a, b;

int main()
{
	cin >> a >> b;
	int pls = 0;
	for (int i = a; i <= b; i++)
	{
		pls = pls + i;
		if (i != b)	cout << i << '+';
		else cout << i << '=';
	}
	cout << pls;
	return 0;
}