#include<bits/stdc++.h>
using namespace std;

long long Urly(int n)
{
	long long urly[n];
	long long i2 = 0, i3 = 0, i5 = 0;
	urly[0] = 1;
	for (int i = 1; i < n; i++)
	{
		urly[i] = min(urly[i2] * 2, min(urly[i3] * 3, urly[i5] * 5));
		if (urly[i] == urly[i2] * 2)
		{
			i2 = i2 + 1;
		}
		if (urly[i] == urly[i3] * 3)
		{
			i3 = i3 + 1;
		}
		if (urly[i] == urly[i5] * 5)
		{
			i5 = i5 + 1;
		}
	}
	return urly[n - 1];
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		cout << Urly(n);
		cout << endl;
	}
}