#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n,x;
		cin >> n>>x;
		int a[100001];
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
		for (int i = 1; i <= n; i++)
		{
			if (a[i] <= x && a[i + 1] > x)
			{
				cout << i << endl;
				break;
			}
			if (i == n) cout << -1 << endl;
		}
	}
}