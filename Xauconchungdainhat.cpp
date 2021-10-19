#include<iostream>
#include<cstring>
using namespace std;

int f[1005][1005];

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string a, b;
		cin >> a >> b;
		int dem = 0;
		memset(f, 0, sizeof(f)); // gan cho mang tat ca la 0
		for (int i = 1; i <= a.size(); i++)
		{
			for (int j = 1; j <= b.size(); j++)
			{
				if (a[i - 1] == b[j - 1])
				{
					f[i][j] = f[i - 1][j - 1] + 1;
				}
				else f[i][j] = max(f[i - 1][j], f[i][j - 1]);
				dem = max(dem, f[i][j]);
			}
		}
		cout << dem << endl;
	}
} 