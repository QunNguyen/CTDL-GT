#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[1001];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int tong = 0;
		for (int i = 0; i < n; i++)
		{
			tong += a[i];
		}
		if (tong % 2 == 0) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}