#include <bits/stdc++.h>

using namespace std;
int year, age;

int main()
{
	char num[20];
	cin >> num;
	if (num[7] == '1' || num[7] == '2') year = 1900 + ((num[0] - 48) * 10 + (num[1] - 48));
	else year = 2000 + ((num[0] - 48) * 10 + (num[1] - 48));
	age = 2019 - year + 1;
	cout << age;
	if (num[7] == '1' || num[7] == 3) cout << 'M' << endl;
	else cout << 'W' << endl;
	return 0;
}