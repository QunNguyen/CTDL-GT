#include<iostream>
#include<queue>
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
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (a[j] > a[i])
				{
					cout << a[j]<<" ";
					break;
				}
				if (j == n - 1) cout << -1<<" ";
			}
		}
		cout << -1;
		cout << endl;
	}
}